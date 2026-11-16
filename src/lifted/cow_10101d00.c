/* f_0x10101d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10101d00(Guest* g)
{
    uint32_t eax;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    esi = 0u;
    loc_1c = rd32(sp0 - 0x1cu) & 0xffffff00u;
    loc_4 = rd32(sp0 - 4u) & 0xffffff00u;
    loc_20 = rd32(sp0 - 0x20u) & 0xffffff00u;
    loc_24 = rd32(sp0 - 0x24u) & 0xffffff00u;
    loc_8 = rd32(sp0 - 8u) & 0xffffff00u;
    loc_c = rd32(sp0 - 0xcu) & 0xffffff00u;
    loc_10 = rd32(sp0 - 0x10u) & 0xffffff00u;
    loc_14 = rd32(sp0 - 0x14u) & 0xffffff00u;
    loc_18 = rd32(sp0 - 0x18u) & 0xffffff00u;
L_10101d33: ;
    if ((int32_t)rd16(arg4 + esi * 2u) > 366)
    {
        eax = rd16(arg4 + esi * 2u);
        goto L_10101d86;
    }
    eax = rd16(arg4 + esi * 2u);
    zf = rd16(arg4 + esi * 2u) == 0x16eu;
    if (zf) goto L_10101d80;
    if ((int32_t)eax > 359) goto L_10101d6a;
    zf = eax == 0x167u;
    if (zf) goto L_10101da7;
    if (eax == 0x2fu) goto L_10101d64;
    if (eax == 0xe5u) goto L_10101d64;
    if (eax != 0x166u) goto L_10101db7;
L_10101d5e: ;
    loc_20 = (loc_20 & 0xffffff00u) | 1u;
L_10101db7: ;
    if ((int32_t)(esi + 1u) < 32)
    {
        esi = esi + 1u;
        goto L_10101d33;
    }
    g->esp = sp0 - 0x2cu;
    t2 = cow_call_regs(g, COW_IMG(0x10101f00u), arg3, g->ecx, arg1, 1, 12, arg1, arg2, arg3, loc_1c, loc_4, loc_20, loc_24, loc_8, loc_c, loc_10, loc_14, loc_18);
    return t2;
L_10101d64: ;
    loc_1c = (loc_1c & 0xffffff00u) | 1u;
    goto L_10101db7;
L_10101d6a: ;
    if (eax == 0x168u)
    {
        loc_8 = (loc_8 & 0xffffff00u) | 1u;
    }
    else
    {
        eax = eax - 0x168u;
        if (eax == 1u)
        {
            loc_10 = (loc_10 & 0xffffff00u) | 1u;
        }
    }
    goto L_10101db7;
L_10101d80: ;
    loc_c = (loc_c & 0xffffff00u) | 1u;
    goto L_10101db7;
L_10101d86: ;
    if (eax - 0x16fu > 0xd8u) goto L_10101db7;
    eax = eax - 0x16fu;
    t1 = rd32(COW_IMG(0x10101e0cu) + rd8(COW_IMG(0x10101e24u) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x10101d5eu: goto L_10101d5e;
    case 0x10101da1u: goto L_10101da1;
    case 0x10101da7u: goto L_10101da7;
    case 0x10101dadu: goto L_10101dad;
    case 0x10101db3u: goto L_10101db3;
    case 0x10101db7u: goto L_10101db7;
    default: rt_fatal(g, COW_IMG(0x10101d9au), "switch");
    }
    return 0;
L_10101da1: ;
    loc_14 = (loc_14 & 0xffffff00u) | 1u;
    goto L_10101db7;
L_10101da7: ;
    loc_24 = (loc_24 & 0xffffff00u) | 1u;
    goto L_10101db7;
L_10101dad: ;
    loc_4 = (loc_4 & 0xffffff00u) | 1u;
    goto L_10101db7;
L_10101db3: ;
    loc_18 = (loc_18 & 0xffffff00u) | 1u;
    goto L_10101db7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10101d00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10101d00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
