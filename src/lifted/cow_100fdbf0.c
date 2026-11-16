/* f_0x100fdbf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_100fdbf0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
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
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd16(sp0 + 0xcu);
    t2 = rd16(sp0 + 0x10u);
    wr16(arg1, (uint16_t)t1);
    wr16(arg1 + 2u, (uint16_t)t2);
    g->eax = (in_eax & 0xffff0000u) | t1;
    g->ecx = (self & 0xffff0000u) | t2;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t3 = cow_stdcall(g, COW_IMG(0x100dc140u), 0);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(arg1 + 4u, t3);
    t6 = cow_stdcall(g, COW_IMG(0x100dc130u), 0);
    t7 = rd32(sp0 + 8u);
    wr32(arg1 + 8u, t6);
    t8 = rd32(t7 + 0xcu);
    wr32(sp0 + 0x10u, arg1 + 0x1cu);
    wr32(sp0 + 8u, t8);
    t9 = cow_divs(g, t8, rd32(t7 + 4u));
    t10 = cow_mods(g, t8, rd32(t7 + 4u));
    if (t10 == rd32(t7 + 8u))
    {
        ebp = t7;
        goto L_100fdd88;
    }
    eax = t9;
    ebp = t7;
    esi = t8;
    loc_4 = 0x1cu;
    loc_8 = 0x1cu;
L_100fdc50: ;
    if ((rd16(esi * 0x110u + rd32(ebp)) & 0x1ffu) == 0u) goto L_100fdd69;
    eax = (eax & 0xffff0000u) | rd16(esi * 0x110u + rd32(ebp));
    edx = rd32(ebp);
    ebx = esi * 0x110u + rd32(ebp);
    if ((eax >> 8u & 0xfeu) == 0u) goto L_100fdd69;
    if ((uint16_t)eax >> 9u << 2u > 0x104u) goto L_100fddde;
    ecx = (uint16_t)eax >> 9u << 2u;
    if (rd16(ebx + 2u) == 0u)
    {
        edx = (edx & 0xffff0000u) | rd16(ebx + 2u);
        goto L_100fdcce;
    }
    edx = (edx & 0xffff0000u) | rd16(ebx + 2u);
    if ((int32_t)(uint16_t)(arg5 - edx) > 32767) goto L_100fdcce;
    wr16(ebx + 2u, 0u);
    wr16(ebx, eax & 0xfe00u);
    t11 = cow_divs(g, rd32(ebp + 0xcu) + 1u, rd32(ebp + 4u));
    t12 = cow_mods(g, rd32(ebp + 0xcu) + 1u, rd32(ebp + 4u));
    wr32(ebp + 0x10u, rd32(ebp + 0x10u) + 1u);
    wr32(ebp + 0xcu, t12);
L_100fdd69: ;
    t18 = cow_divs(g, esi + 1u, rd32(ebp + 4u));
    t19 = cow_mods(g, esi + 1u, rd32(ebp + 4u));
    t20 = rd32(ebp + 4u);
    wr32(sp0 + 8u, t19);
    t21 = cow_divs(g, t19, t20);
    t22 = cow_mods(g, t19, t20);
    if (t22 != rd32(ebp + 8u))
    {
        eax = t21;
        goto L_100fdc4c;
    }
L_100fdd84: ;
L_100fdd88: ;
    t23 = cow_divs(g, rd32(ebp + 8u) + 1u, rd32(ebp + 4u));
    t24 = cow_mods(g, rd32(ebp + 8u) + 1u, rd32(ebp + 4u));
    t25 = rd32(ebp + 4u);
    t26 = rd32(ebp + 0xcu);
    wr32(ebp + 0x10u, 0u);
    t27 = cow_divs(g, t24, t25);
    t28 = cow_mods(g, t24, t25);
    if (t28 != t26)
    {
        ecx = t24;
        esi = t25;
        edi = t26;
        wr32(sp0 + 0xcu, 0u);
L_100fddaf: ;
        t29 = rd32(sp0 + 0xcu) + 1u;
        wr32(sp0 + 0xcu, t29);
        t30 = cow_divs(g, ecx + 1u, esi);
        t31 = cow_mods(g, ecx + 1u, esi);
        t32 = cow_divs(g, t31, esi);
        t33 = cow_mods(g, t31, esi);
        if (t33 != edi)
        {
            ecx = t31;
            goto L_100fddaf;
        }
        t34 = rd32(sp0 + 0xcu);
        wr32(ebp + 0x10u, t34);
    }
    return rd32(sp0 + 0x10u) - arg1;
L_100fdc4c: ;
    esi = rd32(sp0 + 8u);
    goto L_100fdc50;
L_100fdcce: ;
    g->esp = sp0 - 0x18u;
    t13 = cow_cdecl(g, COW_IMG(0x100df780u), 3, ebx, ecx, arg6);
    if (loc_8 + t13 + 4u >= rd32(rd32(COW_IMG(0x104e0af4u)) + 0x448u) - 0x31u) goto L_100fdd84;
    eax = t13;
    if (loc_4 + (rd16(ebx) >> 9u) * 4u >= 0xfa0u) goto L_100fdd84;
    ecx = rd16(ebx) >> 9u << 2u;
    edx = loc_4 + (rd16(ebx) >> 9u) * 4u;
    if (rd16(ebx + 2u) == 0u)
    {
        wr16(ebx + 2u, rd16(sp0 + 0xcu));
        eax = eax + 4u;
    }
    t14 = rd32(sp0 + 0x10u);
    esi = ebx;
    edi = t14;
    ecx = ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t15 = (rd16(ebx) >> 9u) * 4u + rd32(sp0 + 0x10u);
    t16 = rd16(ebx);
    wr32(sp0 + 0x10u, t15);
    t17 = loc_4 + (t16 >> 9u) * 4u;
    esi = rd32(sp0 + 8u);
    loc_4 = t17;
    loc_8 = eax + loc_8;
    goto L_100fdd69;
L_100fddde: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fdbf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fdbf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
