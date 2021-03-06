#pragma once

#include <memory>
#include <string>
#include <vector>

#include "abstract_operator.hpp"

namespace opossum {

class Table;

// operator to retrieve a table from the StorageManager by specifying its name
class GetTable : public AbstractOperator {
 public:
  explicit GetTable(const std::string& name);

  const std::string& table_name() const;

 protected:
  std::shared_ptr<const Table> _on_execute() override;
  const std::string _table_name;
};
}  // namespace opossum
