/* f_0x10108700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10108700(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x10u) == 0u)
    {
        eax = rd32(self + 0x10u);
        edx = 0u;
    }
    else
    {
        eax = rd32(self + 0x10u);
        edx = 0u;
        edi = (in_edi & 0xffff0000u) | rd16(arg1 + 6u);
L_10108713: ;
        if (rd16(eax + 6u) >= (uint16_t)edi) goto L_10108731;
        if (rd16(eax + 0xau) == 0u)
        {
            edx = eax;
            goto L_1010872f;
        }
        edx = eax;
        eax = (eax & 0xffff0000u) | rd16(eax + 0xau);
        if (self + (uint16_t)eax != 0u)
        {
            eax = self + (uint16_t)eax;
            goto L_10108713;
        }
        eax = self + (uint16_t)eax;
    }
L_10108731: ;
    wr16(arg1 + 0xau, 0u);
    wr16(arg1 + 8u, 0u);
    if (eax == 0u) goto L_1010874d;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10108f40u), eax, self, g->edx, 0, 2, arg1, eax);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_1010872f: ;
    eax = 0u;
    goto L_10108731;
L_1010874d: ;
    if (edx == 0u) goto L_1010875d;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x10108e80u), eax, self, g->edx, 0, 2, arg1, edx);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_1010875d: ;
    wr32(self + 0x10u, arg1);
    t5 = rd16(arg1 + 6u);
    wr16(self + 8u, (uint16_t)t5);
    g->eax = (eax & 0xffff0000u) | t5;
    g->esp = sp0 - 8u;
    t6 = cow_fastcall(g, COW_IMG(0x101088c0u), self, edx, 0);
    t7 = g->edx;
    g->edx = t7;
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10108700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10108700(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
