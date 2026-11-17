/* f_0x100ce0e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100ce0e0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0xffffffffu);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100846b0u), self, 3, 0xffffffffu, 0u, 0u);
    t2 = g->edx;
    wr32(sp0 - 0x1cu, t1);
    wr32(sp0 - 0x20u, 0x2bu);
    wr32(sp0 - 0x24u, sp0 - 8u);
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x100ce480u), self, 6, sp0 - 8u, 0x2bu, t1, 0xffffffffu, 0u, 0u);
    t3 = g->edx;
    if (rd32(sp0 - 8u) == 0u)
    {
        eax = rd32(sp0 - 8u);
        edx = t3;
        goto L_100ce116;
    }
    eax = rd32(sp0 - 8u);
    edx = t3;
    wr32(sp0 - 0x10u, 4u);
    wr32(sp0 - 0x14u, 0x3f800000u);
    wr32(sp0 - 0x18u, 0x41000000u);
    loc_c = in_esi;
    loc_10 = 4u;
    loc_14 = 0x3f800000u;
    loc_18 = 0x41000000u;
L_100ce145: ;
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 0x3f800000u);
    wr32(sp0 - 0x24u, 0x3f800000u);
    wr32(sp0 - 0x28u, eax);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x100cd4e0u), self, 7, eax, 0x3f800000u, 0x3f800000u, 1u, loc_18, loc_14, loc_10);
L_100ce159: ;
    g->esi = rd32(sp0 - 0xcu);
    return;
L_100ce116: ;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0xffffffffu);
    wr32(sp0 - 0x1cu, 0x36756f6du);
    wr32(sp0 - 0x20u, 0x2bu);
    wr32(sp0 - 0x24u, sp0 - 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x100ce480u), self, 6, sp0 - 4u, 0x2bu, 0x36756f6du, 0xffffffffu, 0u, 0u);
    t5 = g->edx;
    wr32(sp0 - 8u, rd32(t4));
    if (rd32(t4) == 0u) goto L_100ce159;
    eax = rd32(t4);
    edx = t5;
    wr32(sp0 - 0x10u, 6u);
    wr32(sp0 - 0x14u, 0x41000000u);
    wr32(sp0 - 0x18u, 0x41800000u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = 6u;
    loc_14 = 0x41000000u;
    loc_18 = 0x41800000u;
    goto L_100ce145;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ce0e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100ce0e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
