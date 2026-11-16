/* f_0x1010a550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1010a550(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x8f0u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        edi = rd32(self + 0x8f0u);
        g->eax = in_eax;
        g->esp = sp0 - 8u;
        t1 = cow_fastcall(g, COW_IMG(0x1010cf30u), edi, in_edx, 0);
        t2 = g->ecx;
        t3 = g->edx;
        g->edx = t3;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, edi);
        t4 = g->edx;
        edx = t4;
    }
    t5 = rd32(self + 0x80cu);
    wr32(self + 0x8f0u, 0u);
    wr32(self + 0x8e8u, 7u);
    wr32(self + 0x8ecu, arg1);
    if (t5 == 0u) goto L_1010a5e1;
    ecx = t5;
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x1010b690u), ecx, 1, 0u);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u) goto L_1010a5e1;
    eax = t6;
    ecx = t7;
    edx = t8;
    g->eax = eax;
    g->esp = sp0;
    t9 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x4cu, in_edi, in_esi);
    if (t9 == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = t9;
        t10 = rd32(self + 0x8ecu);
        t11 = rd32(self + 0x80cu);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t12 = cow_thiscall(g, COW_IMG(0x1010d110u), eax, 2, t11, t10);
        eax = t12;
    }
    wr32(self + 0x8f0u, eax);
    if (eax == 0u) goto L_1010a5e7;
    wr32(self + 0x8e8u, 3u);
    return eax;
L_1010a5e1: ;
    eax = rd32(self + 0x8f0u);
L_1010a5e7: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010a550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010a550(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
