/* f_0x1007d0a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007d0a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x1007b6a0u), self, 2, t1, COW_IMG(0x1047d4c4u));
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        esi = t1;
    }
    else
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        edi = t2;
        esi = rd32(edi + 8u);
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x1007a1c0u), eax, g->ecx, g->edx, 1, 4, esi, 1u, 0u, 0u);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 != 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_1007d0ef;
    }
    eax = t6;
    edx = t8;
    if (rd32(COW_IMG(0x1057876cu)) == 0u) goto L_1007d0e8;
    ecx = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0;
    t9 = cow_call_regs(g, COW_IMG(0x101597f0u), eax, ecx, edx, 1, 0);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 != 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        goto L_1007d0ef;
    }
    edx = t11;
L_1007d0e8: ;
    g->edx = edx;
    return -arg3;
L_1007d0ef: ;
    t12 = rd32(eax + 4u);
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x101347b0u), t12, ecx, edx, 1, 3, t12, 1u, 2u);
    t13 = g->edx;
    g->edx = t13;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007d0a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007d0a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
