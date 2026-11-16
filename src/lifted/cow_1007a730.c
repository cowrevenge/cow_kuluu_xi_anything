/* f_0x1007a730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007a730(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->ecx = t1;
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x1007a1c0u), t2, g->ecx, g->edx, 1, 4, t1, 0u, 0u, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        esi = t3;
        goto L_1007a756;
    }
    edx = t5;
    g->edx = edx;
    return -arg3;
L_1007a756: ;
    if (rd8(COW_IMG(0x1047d498u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d498u));
        goto L_1007a771;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d498u));
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1013f630u), eax, g->ecx, g->edx, 1, 1, 1u);
    t6 = g->edx;
    g->edx = t6;
    return -arg3;
L_1007a771: ;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1013f630u), eax, g->ecx, g->edx, 1, 1, 0xffffffffu);
    t7 = g->ecx;
    t8 = rd32(esi + 4u);
    g->edx = t8;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100780a0u), 5, rd32(esi), t8, 0x10u, 0u, 0u);
    t9 = g->edx;
    g->edx = t9;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007a730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007a730(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
