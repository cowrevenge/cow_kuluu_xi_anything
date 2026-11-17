/* f_0x1030500f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1030500f(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->eax = rd32(arg1 + 4u);
    g->edx = in_edx;
    t1 = rd32(arg1 + 4u);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall_cdecl(g, rd32(t1), self, 3, arg1, 1u, 0x50u);
    t3 = g->edx;
    wr32(arg1 + 0x194u, t2);
    wr32(t2, COW_IMG(0x10304d6cu));
    edi = t2 + 0x38u;
    eax = 0u;
    wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u);
    t4 = rd32(arg1 + 0x20u) << 8u;
    g->eax = rd32(arg1 + 4u);
    t5 = rd32(arg1 + 4u);
    g->esp = sp0 - 0x18u;
    t6 = cow_thiscall_cdecl(g, rd32(t5), t4, 3, arg1, 1u, t4);
    t7 = rd32(arg1 + 0x20u);
    wr32(arg1 + 0x8cu, t6);
    if ((int32_t)t7 <= 0)
    {
        edx = 0u;
        goto L_1030506c;
    }
    eax = t6;
    edx = 0u;
    ebx = t6;
L_10305056: ;
    edi = ebx;
    eax = 0xffffffffu;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((int32_t)(edx + 1u) < (int32_t)rd32(arg1 + 0x20u))
    {
        edx = edx + 1u;
        ebx = ebx + 0x100u;
        goto L_10305056;
    }
    edx = edx + 1u;
L_1030506c: ;
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030500f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1030500f(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
