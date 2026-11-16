/* f_0x10108d80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10108d80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd16(arg1 + 0xau) == 0u)
    {
        eax = (in_eax & 0xffff0000u) | rd16(arg1 + 0xau);
        goto L_10108d9c;
    }
    eax = (in_eax & 0xffff0000u) | rd16(arg1 + 0xau);
    if (self + (uint16_t)eax != 0u)
    {
        eax = self + (uint16_t)eax;
        ecx = self;
        goto L_10108dc3;
    }
    eax = self + (uint16_t)eax;
L_10108d9c: ;
    if (rd16(arg1 + 8u) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg1 + 8u);
        goto L_10108db8;
    }
    eax = (eax & 0xffff0000u) | rd16(arg1 + 8u);
    if (self + (uint16_t)eax == 0u)
    {
        eax = self + (uint16_t)eax;
        goto L_10108db8;
    }
    eax = self + (uint16_t)eax;
    edx = rd16(eax + 6u);
L_10108dba: ;
    wr16(self + 8u, (uint16_t)edx);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t1 = cow_fastcall(g, COW_IMG(0x101088c0u), self, edx, 0);
    t2 = g->ecx;
    eax = t1;
    ecx = t2;
L_10108dc3: ;
    if (rd16(arg1 + 8u) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg1 + 8u);
        goto L_10108dd7;
    }
    eax = (eax & 0xffff0000u) | rd16(arg1 + 8u);
    if (ecx + (uint16_t)eax != 0u)
    {
        eax = ecx + (uint16_t)eax;
        goto L_10108dee;
    }
    eax = ecx + (uint16_t)eax;
L_10108dd7: ;
    if (rd16(arg1 + 0xau) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(arg1 + 0xau);
        eax = ecx + (uint16_t)eax;
    }
    wr32(ecx + 0x10u, eax);
L_10108dee: ;
    if (rd16(arg1 + 0xau) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg1 + 0xau);
        edx = 0u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(arg1 + 0xau);
        t3 = ecx + (uint16_t)eax;
        eax = t3;
        edx = t3;
    }
    if (rd16(arg1 + 8u) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg1 + 8u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(arg1 + 8u);
        if (ecx + (uint16_t)eax == 0u)
        {
            eax = ecx + (uint16_t)eax;
        }
        else
        {
            eax = ecx + (uint16_t)eax;
            if (edx == 0u)
            {
                edx = 0u;
            }
            else
            {
                edx = edx - ecx;
            }
            wr16(eax + 0xau, (uint16_t)edx);
        }
    }
    if (rd16(arg1 + 8u) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg1 + 8u);
        edx = 0u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(arg1 + 8u);
        t4 = ecx + (uint16_t)eax;
        eax = t4;
        edx = t4;
    }
    if (rd16(arg1 + 0xau) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg1 + 0xau);
        goto L_10108e6d;
    }
    eax = (eax & 0xffff0000u) | rd16(arg1 + 0xau);
    if (ecx + (uint16_t)eax == 0u)
    {
        eax = ecx + (uint16_t)eax;
        goto L_10108e6d;
    }
    eax = ecx + (uint16_t)eax;
    if (edx == 0u) goto L_10108e67;
    wr16(eax + 8u, (uint16_t)(edx - ecx));
    wr16(arg1 + 8u, 0u);
    wr16(arg1 + 0xau, 0u);
    g->edx = edx - ecx;
    return eax;
L_10108db8: ;
    edx = 0u;
    goto L_10108dba;
L_10108e67: ;
    wr16(eax + 8u, 0u);
    edx = 0u;
L_10108e6d: ;
    wr16(arg1 + 8u, 0u);
    wr16(arg1 + 0xau, 0u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10108d80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10108d80(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
