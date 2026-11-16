/* f_0x10262e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10262e50(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327bbbu));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, in_esi);
    if (rd32(sp0 + 8u) != 0u)
    {
        esi = rd32(sp0 + 8u);
        loc_c = t1;
        goto L_10262e85;
    }
    loc_c = t1;
    wr32(g->fs_base, loc_c);
    return 0x80004003u;
L_10262e85: ;
    wr32(sp0 - 0x14u, 0x14u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, in_esi, loc_c);
    t3 = g->edx;
    wr32(sp0 + 8u, t2);
    wr32(sp0 - 4u, 0u);
    if (t2 == 0u)
    {
        edx = t3;
        eax = 0u;
    }
    else
    {
        eax = t2;
        edx = t3;
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, arg1 - 0xcu);
        g->esp = sp0 - 0x10u;
        t4 = cow_fastcall(g, COW_IMG(0x10262020u), eax, edx, 2, arg1 - 0xcu, 0u);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    t6 = rd32(sp0 - 0xcu);
    wr32(esi, eax);
    wr32(g->fs_base, t6);
    g->esi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return (-(eax != 0u) & 0x7ff8fff2u) - 0x7ff8fff2u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10262e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10262e50(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
