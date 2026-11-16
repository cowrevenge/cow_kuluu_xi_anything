/* f_0x100fd3d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_100fd3d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    cow_frame(g, sp0, 176u);

    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        edx = rd32(COW_IMG(0x104dfd98u));
        goto L_100fd3e9;
    }
    return in_eax & 0xffffff00u;
L_100fd3e9: ;
    if (rd8(edx + 0x40c44u) == 0x17u) goto L_100fd3fb;
    return in_eax & 0xffffff00u;
L_100fd3fb: ;
    wr32(sp0 - 0xa0u, in_esi);
    wr32(sp0 - 0xa4u, in_edi);
    edi = sp0 - 0x9cu;
    eax = 0u;
    ecx = 0x27u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t1 = rd32(edx + 0x40c44u);
    wr32(sp0 - 0x9cu, t1);
    t2 = rd8(arg5 + 1u);
    esi = arg4;
    edi = sp0 - 0x94u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0xa8u, sp0 - 0x9cu);
    wr32(sp0 - 0xacu, 0u);
    g->esp = sp0 - 0xa4u;
    t3 = cow_cdecl(g, COW_IMG(0x100fd0b0u), 2, 0u, sp0 - 0x9cu);
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fd3d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fd3d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
