/* f_0x1018dba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1018dba0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int8_t)rd8(self + 0x19eu) <= 0)
    {
        eax = in_eax;
        ebp = 0u;
        edi = (uint32_t)(int8_t)rd8(self + 0x19eu);
    }
    else
    {
        edi = (uint32_t)(int8_t)rd8(self + 0x19eu);
        ecx = self;
        edx = in_edx;
        ebx = self + 0x11eu;
        ebp = 0u;
L_1018dbbc: ;
        eax = ebx;
        esi = arg1;
L_1018dbc2: ;
        if (rd8(eax) != rd8(esi))
        {
            ecx = (ecx & 0xffffff00u) | rd8(eax);
            edx = (edx & 0xffffff00u) | rd8(eax);
            cf = rd8(eax) < rd8(esi);
            goto L_1018dbe6;
        }
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        if ((uint8_t)edx == 0u) goto L_1018dbe2;
        if (rd8(eax + 1u) != rd8(esi + 1u))
        {
            ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
            edx = (edx & 0xffffff00u) | rd8(eax + 1u);
            cf = rd8(eax + 1u) < rd8(esi + 1u);
            goto L_1018dbe6;
        }
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        if ((uint8_t)edx != 0u)
        {
            eax = eax + 2u;
            esi = esi + 2u;
            goto L_1018dbc2;
        }
L_1018dbe2: ;
        eax = 0u;
L_1018dbeb: ;
        if (eax == 0u) goto L_1018dbf7;
        if ((int32_t)(ebp + 1u) < (int32_t)edi)
        {
            ebx = ebx + 0x10u;
            ebp = ebp + 1u;
            goto L_1018dbbc;
        }
        ebp = ebp + 1u;
L_1018dbf7: ;
    }
    if (ebp != edi)
    {
        edx = ebp;
    }
    else
    {
        t1 = rd8(self + 0x19eu);
        wr8(self + 0x19eu, (uint8_t)(t1 + 1u));
        if ((int8_t)(t1 + 1u) < 8)
        {
            edx = edi;
        }
        else
        {
            edx = edi;
            wr8(self + 0x19eu, 7u);
        }
    }
    if ((int32_t)edx > 0)
    {
        ebx = edx;
        edi = edx * 0x10u + self + 0x10eu;
L_1018dc30: ;
        eax = edi;
L_1018dc37: ;
        t2 = rd8(eax);
        wr8(eax + 0x10u, (uint8_t)t2);
        if ((uint8_t)t2 != 0u)
        {
            eax = eax + 1u;
            edx = (edx & 0xffffff00u) | t2;
            goto L_1018dc37;
        }
        edx = (edx & 0xffffff00u) | t2;
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            edi = edi - 0x10u;
            goto L_1018dc30;
        }
    }
    eax = arg1;
    ecx = self;
L_1018dc57: ;
    t3 = rd8(eax);
    wr8(eax + self - arg1 + 0x11eu, (uint8_t)t3);
    if ((uint8_t)t3 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t3;
        goto L_1018dc57;
    }
    return;
L_1018dbe6: ;
    eax = -cf + 1u - cf;
    goto L_1018dbeb;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018dba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1018dba0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
