/* f_0x1026dc4c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1026dc4c(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    wr8(COW_IMG(0x103907e4u), 2u);
    wr32(COW_IMG(0x1099aeacu), 0u);
    if (rd32(COW_IMG(0x1099aeacu)) == 0u) goto L_1026dc6f;
    eax = in_eax;
    ecx = self;
    edx = in_edx;
    loc_4 = in_ebp;
    loc_8 = in_esi;
L_1026dcd3: ;
    wr32(sp0 - 0xcu, COW_IMG(0x103b1010u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t14 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b1010u));   /* kernel32.dll!OutputDebugStringA */
    t15 = g->ecx;
    t16 = g->edx;
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->edx = t16;
    t17 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t18 = g->edx;
    wr32(sp0 - 0xcu, rd32(COW_IMG(0x1099aeacu)));
    g->ecx = rd32(COW_IMG(0x1099aeacu));
    g->edx = t18;
    t19 = rd32(COW_IMG(0x1099aeacu));
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x1026db44u), 3, t19, rd32(sp0 - 8u), rd32(sp0 - 4u));
    t20 = g->ecx;
    t21 = g->edx;
    eax = 0u;
    ecx = t20;
    edx = t21;
L_1026dd00: ;
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->eax = eax;
    g->edx = edx;
    t22 = rd32(sp0 - 8u);
    g->esp = sp0 - 4u;
    t23 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t24 = g->edx;
    g->esi = t22;
    g->ebp = rd32(sp0 - 4u);
    g->edx = t24;
    return t23;
L_1026dc6f: ;
    wr32(COW_IMG(0x1099aeacu), COW_IMG(0x1068a328u));
    wr32(sp0 - 0xcu, 0x1007cu);
    wr32(sp0 - 0x10u, COW_IMG(0x103907e8u));
    wr32(sp0 - 0x14u, rd32(COW_IMG(0x1099aeacu)));
    g->eax = rd32(COW_IMG(0x1099aeacu));
    g->ecx = self;
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x1099aeacu));
    g->esp = sp0;
    t2 = cow_cdecl(g, COW_IMG(0x103169e0u), 5, t1, COW_IMG(0x103907e8u), 0x1007cu, in_esi, in_ebp);
    t3 = g->ecx;
    t4 = g->edx;
    g->ecx = t3;
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x1026cc50u), g->eax, g->ecx, t4, 1, 0);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0xcu, COW_IMG(0x1068a328u));
    g->ecx = t6;
    g->esp = sp0;
    t8 = cow_call_regs(g, COW_IMG(0x1026d72cu), g->eax, g->ecx, t7, 1, 3, COW_IMG(0x1068a328u), in_esi, in_ebp);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 != 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_1026dca9;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    goto L_1026dcd3;
L_1026dca9: ;
    wr32(sp0 - 0xcu, 0x10u);
    wr32(sp0 - 0x10u, 0x10u);
    wr32(sp0 - 0x14u, 0x400u);
    wr32(sp0 - 0x18u, 0x10u);
    wr32(sp0 - 0x1cu, COW_IMG(0x1081a928u));
    wr32(sp0 - 0x20u, COW_IMG(0x1089a928u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_cdecl(g, COW_IMG(0x1026d771u), 6, COW_IMG(0x1089a928u), COW_IMG(0x1081a928u), 0x10u, 0x400u, 0x10u, 0x10u);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 != 0u)
    {
        ecx = t12;
        edx = t13;
        goto L_1026dccc;
    }
    eax = t11;
    ecx = t12;
    edx = t13;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    goto L_1026dcd3;
L_1026dccc: ;
    eax = 1u;
    goto L_1026dd00;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026dc4c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1026dc4c(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
