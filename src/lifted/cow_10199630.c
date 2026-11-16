/* f_0x10199630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10199630(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_1c;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (arg1 > 7u) goto L_101996c1;
    t1 = rd32(COW_IMG(0x101996e8u) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x1019965du: goto L_1019965d;
    case 0x1019966au: goto L_1019966a;
    case 0x10199672u: goto L_10199672;
    case 0x1019967fu: goto L_1019967f;
    case 0x1019968cu: goto L_1019968c;
    case 0x10199694u: goto L_10199694;
    case 0x101996a1u: goto L_101996a1;
    case 0x101996aeu: goto L_101996ae;
    default: rt_fatal(g, COW_IMG(0x10199656u), "switch");
    }
    return;
L_1019965d: ;
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 7u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    eax = sp0 - 8u;
    edx = in_edx;
    loc_1c = 7u;
L_101996b9: ;
    g->edi = 0u;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, loc_1c, 1u, 1u);
L_101996c1: ;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x80808080u);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, 0u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x28u), 5, 0u, 4u, 0x80808080u, 0u, 0u);
    g->edi = in_edi;
    return;
L_1019966a: ;
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 8u);
    loc_1c = 8u;
L_101996b4: ;
    wr32(sp0 - 0x20u, sp0 - 8u);
    eax = arg1;
    edx = in_edx;
    goto L_101996b9;
L_10199672: ;
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 9u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    eax = arg1;
    edx = sp0 - 8u;
    loc_1c = 9u;
    goto L_101996b9;
L_1019967f: ;
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 0xau);
    wr32(sp0 - 0x20u, sp0 - 8u);
    eax = sp0 - 8u;
    edx = in_edx;
    loc_1c = 0xau;
    goto L_101996b9;
L_1019968c: ;
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 0xbu);
    loc_1c = 0xbu;
    goto L_101996b4;
L_10199694: ;
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 0xcu);
    wr32(sp0 - 0x20u, sp0 - 8u);
    eax = arg1;
    edx = sp0 - 8u;
    loc_1c = 0xcu;
    goto L_101996b9;
L_101996a1: ;
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 0xdu);
    wr32(sp0 - 0x20u, sp0 - 8u);
    eax = sp0 - 8u;
    edx = in_edx;
    loc_1c = 0xdu;
    goto L_101996b9;
L_101996ae: ;
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 0xeu);
    loc_1c = 0xeu;
    goto L_101996b4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10199630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10199630(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
