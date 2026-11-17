/* f_0x1026d771 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_1026d771(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x1cu, 0xccccccccu);
    wr32(sp0 - 0x18u, 0xccccccccu);
    wr32(sp0 - 0x14u, 0xccccccccu);
    wr32(sp0 - 0x10u, 0xccccccccu);
    wr32(sp0 - 0xcu, 0xccccccccu);
    wr32(sp0 - 8u, 0xccccccccu);
    wr32(sp0 - 0x18u, 0u);
    edx = in_edx;
    loc_4 = in_ebp;
    loc_1c = 0xccccccccu;
    loc_18 = 0u;
L_1026d7a0: ;
    if ((int32_t)loc_18 >= (int32_t)arg3)
    {
        ecx = loc_18;
        goto L_1026d873;
    }
    ecx = loc_18;
    wr32(sp0 - 0x20u, 0u);
    t1 = arg1 + loc_18 * 0x10058u;
    wr32(sp0 - 0x24u, t1);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x1026ccc5u), 3, t1, 0u, loc_1c);
    t2 = rd32(sp0 + 8u);
    wr32(sp0 - 0x14u, t2);
    wr32(sp0 - 0x10u, arg4);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x1cu, 0u);
    edx = arg4;
    loc_1c = 0u;
L_1026d7ea: ;
    if ((int32_t)loc_1c >= (int32_t)arg5) goto L_1026d823;
    wr32(sp0 - 0x20u, sp0 - 0x14u);
    t3 = arg1 + rd32(sp0 - 0x18u) * 0x10058u + 0x803cu;
    wr32(sp0 - 0x24u, t3);
    g->edx = t3;
    g->esp = sp0 - 0x18u;
    cow_thiscall_cdecl(g, COW_IMG(0x1026d1d4u), arg1, 3, t3, sp0 - 0x14u, loc_1c);
    t4 = g->edx;
    t5 = arg4 + rd32(sp0 + 8u);
    wr32(sp0 + 8u, t5);
    t6 = rd32(sp0 + 8u);
    wr32(sp0 - 0x14u, t6);
    edx = t4;
    t7 = rd32(sp0 - 0x1cu) + 1u;
    wr32(sp0 - 0x1cu, t7);
    loc_1c = t7;
    goto L_1026d7ea;
L_1026d797: ;
    t12 = rd32(sp0 - 0x18u) + 1u;
    wr32(sp0 - 0x18u, t12);
    loc_4 = rd32(sp0 - 4u);
    loc_18 = t12;
    goto L_1026d7a0;
L_1026d823: ;
    wr32(sp0 - 0x1cu, 0u);
    loc_1c = 0u;
L_1026d835: ;
    if ((int32_t)loc_1c >= (int32_t)arg6) goto L_1026d86e;
    wr32(sp0 - 0x20u, sp0 - 0x14u);
    t8 = arg1 + rd32(sp0 - 0x18u) * 0x10058u + 0x4034u;
    wr32(sp0 - 0x24u, t8);
    g->esp = sp0 - 0x18u;
    cow_thiscall_cdecl(g, COW_IMG(0x1026d1d4u), t8, 3, t8, sp0 - 0x14u, loc_1c);
    t9 = arg4 + rd32(sp0 + 8u);
    wr32(sp0 + 8u, t9);
    t10 = rd32(sp0 + 8u);
    wr32(sp0 - 0x14u, t10);
    t11 = rd32(sp0 - 0x1cu) + 1u;
    wr32(sp0 - 0x1cu, t11);
    edx = t11;
    loc_1c = t11;
    goto L_1026d835;
L_1026d86e: ;
    goto L_1026d797;
L_1026d873: ;
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    g->ebp = rd32(sp0 - 4u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026d771(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1026d771(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
