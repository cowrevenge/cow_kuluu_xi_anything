/* f_0x102f6f2c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102f6f2c(Guest* g)
{
    uint32_t eax;
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
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0x10u) == 0xcfu)
    {
        ecx = self;
        edx = in_edx;
        edi = rd32(arg1 + 0x17cu);
    }
    else
    {
        edi = rd32(arg1 + 0x17cu);
        wr32(rd32(arg1) + 0x14u, 0x12u);
        t1 = rd32(arg1 + 0x10u);
        wr32(rd32(arg1) + 0x18u, t1);
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_thiscall_cdecl(g, rd32(rd32(arg1)), t1, 1, arg1);
        t2 = g->edx;
        ecx = arg1;
        edx = t2;
    }
    if (rd8(arg1 + 0x4au) == 0u) goto L_102f6f7d;
    if (rd8(arg1 + 0x59u) == 0u) goto L_102f6f7d;
    if (rd32(arg1 + 0x74u) == 0u) goto L_102f6f7d;
    t3 = rd32(edi + 0x18u);
    wr32(arg1 + 0x1a4u, t3);
    g->eax = t3;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall_cdecl(g, rd32(t3 + 0xcu), ecx, 1, arg1);
    t5 = g->edx;
    wr8(edi + 8u, 0u);
    eax = t4;
    edx = t5;
L_102f6f8b: ;
    g->edx = edx;
    return eax;
L_102f6f7d: ;
    wr32(rd32(arg1) + 0x14u, 0x2du);
    g->eax = rd32(arg1);
    g->edx = edx;
    t6 = rd32(arg1);
    g->esp = sp0 - 8u;
    t7 = cow_thiscall_cdecl(g, rd32(t6), ecx, 1, arg1);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    goto L_102f6f8b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f6f2c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f6f2c(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
