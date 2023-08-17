/**
 * Deepin官网
 * deepin的官方网站后台接口
 *
 * The version of the OpenAPI document: 1.0
 * Contact: wurongjie@deepin.org
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * DHHandlers_ClientLoginRequest.h
 *
 * 
 */

#ifndef DHHandlers_ClientLoginRequest_H
#define DHHandlers_ClientLoginRequest_H

#include <QJsonObject>

#include <QString>

#include "DHEnum.h"
#include "DHObject.h"

namespace DeepinHomeAPI {

class DHHandlers_ClientLoginRequest : public DHObject {
public:
    DHHandlers_ClientLoginRequest();
    DHHandlers_ClientLoginRequest(QString json);
    ~DHHandlers_ClientLoginRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getCode() const;
    void setCode(const QString &code);
    bool is_code_Set() const;
    bool is_code_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString code;
    bool m_code_isSet;
    bool m_code_isValid;
};

} // namespace DeepinHomeAPI

Q_DECLARE_METATYPE(DeepinHomeAPI::DHHandlers_ClientLoginRequest)

#endif // DHHandlers_ClientLoginRequest_H
