/* f_0x100ae2d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_100ae2d0(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg2 >= 0) goto L_100ae2f9;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t1 = g->ecx;
    t2 = g->edx;
    g->eax = arg1;
    g->edx = t2;
    t3 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, arg1);
    t4 = g->edx;
    wr8(arg3, 0xffu);
    g->edx = t4;
    return t3;
L_100ae2f9: ;
    g->eax = in_eax;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, arg2 + 0x5dcu, in_edi, in_esi);
    esi = arg1;
    edi = t5;
    ecx = arg2 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg2 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(arg2 + t5 + 1u, 0u);
    g->edx = arg2;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, arg1);
    t6 = g->edx;
    wr8(arg3, 1u);
    wr32(COW_IMG(0x10489908u), t5);
    g->edx = t6;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ae2d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ae2d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
