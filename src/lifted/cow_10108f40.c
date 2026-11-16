/* f_0x10108f40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10108f40(Guest* g)
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 == 0u) goto L_10108f5a;
    if (rd16(arg2 + 8u) == 0u) goto L_10108f5a;
    eax = (in_eax & 0xffff0000u) | rd16(arg2 + 8u);
    eax = self + (uint16_t)eax;
L_10108f5c: ;
    if (arg1 == 0u)
    {
        edx = arg2;
    }
    else
    {
        if (eax == 0u)
        {
            eax = 0u;
        }
        else
        {
            eax = eax - self;
        }
        wr16(arg1 + 8u, (uint16_t)eax);
        if (arg2 == 0u)
        {
            edx = 0u;
        }
        else
        {
            edx = arg2 - self;
        }
        wr16(arg1 + 0xau, (uint16_t)edx);
    }
    if (rd16(arg1 + 8u) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg1 + 8u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(arg1 + 8u);
        if (self + (uint16_t)eax == 0u)
        {
            eax = self + (uint16_t)eax;
        }
        else
        {
            eax = self + (uint16_t)eax;
            wr16(eax + 0xau, (uint16_t)(arg1 - self));
            edx = arg1 - self;
        }
    }
    if (rd16(arg1 + 0xau) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg1 + 0xau);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(arg1 + 0xau);
        if (self + (uint16_t)eax == 0u)
        {
            eax = self + (uint16_t)eax;
        }
        else
        {
            eax = self + (uint16_t)eax;
            wr16(eax + 8u, (uint16_t)(arg1 - self));
            edx = arg1 - self;
        }
    }
    if (rd16(arg1 + 0xau) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg1 + 0xau);
        goto L_10108fcd;
    }
    eax = (eax & 0xffff0000u) | rd16(arg1 + 0xau);
    if (self + (uint16_t)eax != 0u)
    {
        eax = self + (uint16_t)eax;
        ecx = self;
        goto L_10108fda;
    }
    eax = self + (uint16_t)eax;
L_10108fcd: ;
    t1 = rd16(arg1 + 6u);
    wr16(self + 8u, (uint16_t)t1);
    g->eax = (eax & 0xffff0000u) | t1;
    g->esp = sp0 - 4u;
    t2 = cow_fastcall(g, COW_IMG(0x101088c0u), self, edx, 0);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
L_10108fda: ;
    if (rd16(arg1 + 8u) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg1 + 8u);
        goto L_10108fee;
    }
    eax = (eax & 0xffff0000u) | rd16(arg1 + 8u);
    if (ecx + (uint16_t)eax != 0u)
    {
        eax = ecx + (uint16_t)eax;
        goto L_10108ff1;
    }
    eax = ecx + (uint16_t)eax;
L_10108fee: ;
    wr32(ecx + 0x10u, arg1);
L_10108ff1: ;
    g->edx = edx;
    return eax;
L_10108f5a: ;
    eax = 0u;
    goto L_10108f5c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10108f40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10108f40(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
