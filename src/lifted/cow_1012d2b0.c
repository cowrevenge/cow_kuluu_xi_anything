/* f_0x1012d2b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1012d2b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_c;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 - 3u > 3u)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = in_edx;
        goto L_1012d3e8;
    }
    t1 = rd32(COW_IMG(0x1012d40cu) + (uint32_t)(int16_t)arg1 * 4u - 0xcu);
    switch (t1 - RD)
    {
    case 0x1012d2d1u: goto L_1012d2d1;
    case 0x1012d3d9u: eax = (uint32_t)(int16_t)arg1 - 3u; edx = in_edx; goto L_1012d3d9;
    case 0x1012d3f1u: goto L_1012d3f1;
    default: rt_fatal(g, COW_IMG(0x1012d2cau), "switch");
    }
    return 0;
L_1012d2d1: ;
    if ((uint32_t)(int16_t)arg2 - 1u > 7u)
    {
        edx = in_edx;
        goto L_1012d3c9;
    }
    t2 = rd32(COW_IMG(0x1012d41cu) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t2 - RD)
    {
    case 0x1012d2e5u: goto L_1012d2e5;
    case 0x1012d2eeu: goto L_1012d2ee;
    case 0x1012d35au: goto L_1012d35a;
    case 0x1012d360u: goto L_1012d360;
    case 0x1012d38au: goto L_1012d38a;
    case 0x1012d3b4u: goto L_1012d3b4;
    case 0x1012d3bau: goto L_1012d3ba;
    case 0x1012d3f8u: eax = (uint32_t)(int16_t)arg2 - 1u; goto L_1012d3f8;
    default: rt_fatal(g, COW_IMG(0x1012d2deu), "switch");
    }
    return 0;
L_1012d2e5: ;
    eax = (uint32_t)(int16_t)arg2 - 1u;
    edx = in_edx;
    loc_c = 0u;
    loc_10 = 2u;
L_1012d3be: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101ad670u), rd32(COW_IMG(0x10662da4u)), 2, loc_10, loc_c);
    t22 = g->edx;
    edx = t22;
L_1012d3c9: ;
    g->eax = rd32(rd32(COW_IMG(0x10662d40u)));
    g->edx = edx;
    t23 = rd32(rd32(COW_IMG(0x10662d40u)));
    g->esp = sp0 - 8u;
    t24 = cow_thiscall(g, rd32(t23 + 0x24u), rd32(COW_IMG(0x10662d40u)), 1, COW_IMG(0x103d3c84u));
    t25 = g->edx;
    eax = t24;
    edx = t25;
L_1012d3d9: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t26 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f538u));
    t27 = g->edx;
    eax = t26;
    edx = t27;
L_1012d3e8: ;
    wr16(self + 0x16u, (uint16_t)arg2);
    g->edx = edx;
    return eax;
L_1012d2ee: ;
    if ((uint32_t)(int16_t)rd16(self + 0x14u) == 0xfffffffdu)
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x14u);
        goto L_1012d353;
    }
    eax = (uint32_t)(int16_t)rd16(self + 0x14u);
    if (eax == 0xfffffffeu)
    {
        edx = in_edx;
        goto L_1012d3c9;
    }
    if (eax == 0xffffffffu) goto L_1012d319;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t15 = cow_thiscall(g, COW_IMG(0x1018d950u), rd32(COW_IMG(0x1066268cu)), 1, eax);
    t16 = g->edx;
    eax = t15;
    edx = t16;
    loc_c = t15;
    loc_10 = 4u;
    goto L_1012d3be;
L_1012d319: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t17 = cow_thiscall(g, COW_IMG(0x101598b0u), rd32(COW_IMG(0x1057876cu)), 0);
    t18 = g->edx;
    if (t17 == 0u)
    {
        edx = t18;
        goto L_1012d3c9;
    }
    eax = t17;
    edx = t18;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t19 = cow_thiscall(g, COW_IMG(0x101598b0u), rd32(COW_IMG(0x1057876cu)), 0);
    t20 = g->edx;
    if (rd16(t19 + 0x210u) == 0u)
    {
        eax = t19;
        edx = t20;
        loc_c = eax + 0x7cu;
        eax = eax + 0x7cu;
        loc_10 = 4u;
    }
    else
    {
        eax = t19;
        edx = t20;
        loc_c = eax + 0x214u;
        eax = eax + 0x214u;
        loc_10 = 4u;
    }
    goto L_1012d3be;
L_1012d353: ;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037c50u), self, 0);
    t21 = g->edx;
    edx = t21;
    goto L_1012d3c9;
L_1012d35a: ;
    eax = (uint32_t)(int16_t)arg2 - 1u;
    edx = in_edx;
    loc_c = 0u;
    loc_10 = 5u;
    goto L_1012d3be;
L_1012d360: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t10 = cow_stdcall(g, COW_IMG(0x100e3730u), 0);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint16_t)t10 == 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        goto L_1012d370;
    }
    eax = t10;
    edx = t12;
    loc_c = 0u;
    loc_10 = 6u;
    goto L_1012d3be;
L_1012d370: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t13 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, 0u, 0u, 0u, 1u);
    t14 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        edx = t14;
        goto L_1012d3c9;
    }
    eax = t13;
    edx = t14;
    loc_c = 0u;
    loc_10 = 6u;
    goto L_1012d3be;
L_1012d38a: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t5 = cow_stdcall(g, COW_IMG(0x100e3730u), 0);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint16_t)t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        goto L_1012d39a;
    }
    eax = t5;
    edx = t7;
    loc_c = 0u;
    loc_10 = 0xcu;
    goto L_1012d3be;
L_1012d39a: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, 0u, 0u, 0u, 2u);
    t9 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        edx = t9;
        goto L_1012d3c9;
    }
    eax = t8;
    edx = t9;
    loc_c = 0u;
    loc_10 = 0xcu;
    goto L_1012d3be;
L_1012d3b4: ;
    eax = (uint32_t)(int16_t)arg2 - 1u;
    edx = in_edx;
    loc_c = 0u;
    loc_10 = 0xbu;
    goto L_1012d3be;
L_1012d3ba: ;
    eax = (uint32_t)(int16_t)arg2 - 1u;
    edx = in_edx;
    loc_c = 0u;
    loc_10 = 3u;
    goto L_1012d3be;
L_1012d3f1: ;
    if (rd16(self + 0x16u) != 2u)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = in_edx;
        goto L_1012d3e8;
    }
    eax = (uint32_t)(int16_t)arg1 - 3u;
L_1012d3f8: ;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x1012d210u), eax, self, g->edx, 0, 2, 1u, 1u);
    t4 = g->edx;
    wr16(self + 0x16u, (uint16_t)arg2);
    g->edx = t4;
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012d2b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012d2b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
