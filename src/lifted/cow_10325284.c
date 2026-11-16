/* f_0x10325284 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_10325284(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
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
    uint32_t t35;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int8_t)arg1 > 90) goto L_10325466;
    if ((uint32_t)(int8_t)arg1 == 0x5au)
    {
        eax = (uint32_t)(int8_t)arg1;
        goto L_103255a2;
    }
    if ((int8_t)arg1 > 77) goto L_1032536e;
    if ((uint32_t)(int8_t)arg1 == 0x4du) goto L_10325354;
    if ((uint32_t)(int8_t)arg1 == 0x25u) goto L_10325340;
    if ((uint32_t)(int8_t)arg1 - 0x25u == 0x1cu) goto L_10325328;
    if ((uint32_t)(int8_t)arg1 == 0x42u) goto L_10325310;
    if ((uint32_t)(int8_t)arg1 - 0x42u == 6u) goto L_103252f3;
    if ((uint32_t)(int8_t)arg1 != 0x49u) goto L_1032566e;
    wr32(COW_IMG(0x109f82d8u), rd32(COW_IMG(0x109f82d4u)));
    t1 = cow_divs(g, rd32(arg2 + 8u), 0xcu);
    t2 = cow_mods(g, rd32(arg2 + 8u), 0xcu);
    if (t2 != 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = 0xcu;
    }
    ecx = 0xcu;
L_103252ed: ;
    loc_1c = 2u;
    loc_20 = edx;
L_103253c0: ;
    g->esp = sp0 - 0x10u;
    cow_thiscall_cdecl(g, COW_IMG(0x1032569au), ecx, 4, loc_20, loc_1c, arg3, arg4);
L_1032566e: ;
    return;
L_103252f3: ;
    wr32(COW_IMG(0x109f82d8u), rd32(COW_IMG(0x109f82d4u)));
    t3 = rd32(arg2 + 8u);
    eax = arg2;
    ecx = self;
    edx = in_edx;
    loc_1c = 2u;
    loc_20 = t3;
    goto L_103253c0;
L_10325310: ;
    t4 = rd32(arg5 + rd32(arg2 + 0x10u) * 4u + 0x68u);
    eax = rd32(arg2 + 0x10u);
    ecx = arg5;
    edx = in_edx;
    loc_1c = t4;
L_10325666: ;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10325673u), g->eax, g->ecx, edx, 1, 3, loc_1c, arg3, arg4);
    goto L_1032566e;
L_10325328: ;
    t5 = rd32(arg5 + rd32(arg2 + 0x18u) * 4u + 0x1cu);
    eax = rd32(arg2 + 0x18u);
    ecx = arg5;
    edx = in_edx;
    loc_1c = t5;
    goto L_10325666;
L_10325340: ;
    wr8(rd32(arg3), 0x25u);
    wr32(arg3, rd32(arg3) + 1u);
    wr32(arg4, rd32(arg4) - 1u);
    goto L_1032566e;
L_10325354: ;
    wr32(COW_IMG(0x109f82d8u), rd32(COW_IMG(0x109f82d4u)));
    t6 = rd32(arg2 + 4u);
    eax = arg2;
    ecx = self;
    edx = in_edx;
    loc_1c = 2u;
    loc_20 = t6;
    goto L_103253c0;
L_1032536e: ;
    if ((uint32_t)(int8_t)arg1 == 0x53u) goto L_1032544a;
    if ((uint32_t)(int8_t)arg1 == 0x55u) goto L_1032540a;
    if ((uint32_t)(int8_t)arg1 == 0x57u) goto L_103253ec;
    if ((uint32_t)(int8_t)arg1 == 0x58u) goto L_103253cd;
    if ((uint32_t)(int8_t)arg1 != 0x59u) goto L_1032566e;
    wr32(COW_IMG(0x109f82d8u), rd32(COW_IMG(0x109f82d4u)));
    t7 = rd32(arg2 + 0x14u);
    t8 = cow_divs(g, t7, 0x64u);
    t9 = cow_mods(g, t7, 0x64u);
    t10 = cow_divs(g, t7, 0x64u);
    t11 = cow_mods(g, t7, 0x64u);
    t12 = t11 + t8 * 0x64u + 0x76cu;
    eax = t10;
    ecx = 0x64u;
    edx = t11;
    loc_1c = 4u;
    loc_20 = t12;
    goto L_103253c0;
L_103253cd: ;
    wr32(COW_IMG(0x109f82d4u), 0u);
    t13 = rd32(arg5 + 0xa8u);
    eax = arg5;
    ecx = self;
    edx = in_edx;
    loc_24 = t13;
L_1032560a: ;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10325752u), eax, ecx, edx, 1, 5, loc_24, arg2, arg3, arg4, arg5);
    goto L_1032566e;
L_103253ec: ;
    wr32(COW_IMG(0x109f82d8u), rd32(COW_IMG(0x109f82d4u)));
    if (rd32(arg2 + 0x18u) != 0u)
    {
        ecx = rd32(arg2 + 0x18u);
        esi = ecx - 1u;
    }
    else
    {
        esi = 6u;
    }
L_1032541a: ;
    if ((int32_t)rd32(arg2 + 0x1cu) >= (int32_t)esi)
    {
        ecx = rd32(arg2 + 0x1cu);
        t14 = cow_divs(g, ecx, 7u);
        t15 = cow_mods(g, ecx, 7u);
        t16 = cow_divs(g, ecx, 7u);
        t17 = cow_mods(g, ecx, 7u);
        if ((int32_t)t17 < (int32_t)esi)
        {
            eax = t16;
            ecx = 7u;
            edx = t17;
            edi = t14;
        }
        else
        {
            eax = t16;
            edx = t17;
            edi = t14;
            ecx = 7u;
            edi = edi + 1u;
        }
    }
    else
    {
        ecx = rd32(arg2 + 0x1cu);
        eax = arg2;
        edx = in_edx;
        edi = 0u;
    }
    loc_1c = 2u;
    loc_20 = edi;
    goto L_103253c0;
L_1032540a: ;
    wr32(COW_IMG(0x109f82d8u), rd32(COW_IMG(0x109f82d4u)));
    esi = rd32(arg2 + 0x18u);
    goto L_1032541a;
L_1032544a: ;
    wr32(COW_IMG(0x109f82d8u), rd32(COW_IMG(0x109f82d4u)));
    eax = arg2;
    ecx = self;
    edx = in_edx;
    loc_1c = 2u;
    loc_20 = rd32(arg2);
    goto L_103253c0;
L_10325466: ;
    if ((int8_t)arg1 > 109) goto L_10325583;
    if ((uint32_t)(int8_t)arg1 == 0x6du) goto L_10325566;
    if ((uint32_t)(int8_t)arg1 == 0x61u) goto L_1032554f;
    if ((uint32_t)(int8_t)arg1 == 0x62u) goto L_10325537;
    if ((uint32_t)(int8_t)arg1 == 0x63u) goto L_103254d0;
    if ((uint32_t)(int8_t)arg1 == 0x64u) goto L_103254b3;
    if ((uint32_t)(int8_t)arg1 - 0x64u != 6u) goto L_1032566e;
    wr32(COW_IMG(0x109f82d8u), rd32(COW_IMG(0x109f82d4u)));
    eax = rd32(arg2 + 0x1cu);
    loc_1c = 3u;
L_103254ac: ;
    ecx = self;
    edx = in_edx;
    loc_20 = eax + 1u;
    eax = eax + 1u;
    goto L_103253c0;
L_103254b3: ;
    wr32(COW_IMG(0x109f82d8u), rd32(COW_IMG(0x109f82d4u)));
    t18 = rd32(arg2 + 0xcu);
    eax = arg2;
    ecx = self;
    edx = in_edx;
    loc_1c = 2u;
    loc_20 = t18;
    goto L_103253c0;
L_103254d0: ;
    if (rd32(COW_IMG(0x109f82d4u)) == 0u)
    {
        t20 = rd32(arg5 + 0xa0u);
        loc_24 = t20;
    }
    else
    {
        wr32(COW_IMG(0x109f82d4u), 0u);
        t19 = rd32(arg5 + 0xa4u);
        loc_24 = t19;
    }
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10325752u), (uint32_t)(int8_t)arg1 - 0x63u, self, in_edx, 1, 5, loc_24, arg2, arg3, arg4, arg5);
    t21 = g->ecx;
    t22 = g->edx;
    if (rd32(arg4) == 0u) goto L_1032566e;
    ecx = t21;
    edx = t22;
    t23 = rd32(arg3);
    wr8(t23, 0x20u);
    wr32(arg3, rd32(arg3) + 1u);
    wr32(arg4, rd32(arg4) - 1u);
    t24 = rd32(arg5 + 0xa8u);
    eax = t23;
    loc_24 = t24;
    goto L_1032560a;
L_10325537: ;
    t25 = rd32(arg5 + rd32(arg2 + 0x10u) * 4u + 0x38u);
    eax = rd32(arg2 + 0x10u);
    ecx = arg5;
    edx = in_edx;
    loc_1c = t25;
    goto L_10325666;
L_1032554f: ;
    t26 = rd32(arg5 + rd32(arg2 + 0x18u) * 4u);
    eax = rd32(arg2 + 0x18u);
    ecx = arg5;
    edx = in_edx;
    loc_1c = t26;
    goto L_10325666;
L_10325566: ;
    wr32(COW_IMG(0x109f82d8u), rd32(COW_IMG(0x109f82d4u)));
    eax = rd32(arg2 + 0x10u);
    loc_1c = 2u;
    goto L_103254ac;
L_10325583: ;
    if ((uint32_t)(int8_t)arg1 == 0x70u) goto L_10325646;
    if ((uint32_t)(int8_t)arg1 - 0x70u == 7u) goto L_10325629;
    if ((uint32_t)(int8_t)arg1 == 0x78u) goto L_103255e7;
    if ((uint32_t)(int8_t)arg1 == 0x79u) goto L_103255c4;
    if ((uint32_t)(int8_t)arg1 != 0x7au) goto L_1032566e;
    eax = (uint32_t)(int8_t)arg1 - 0x7au;
L_103255a2: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x1031ffb9u), 0);
    t27 = g->edx;
    t28 = rd32(COW_IMG(0x103d2ddcu) + (rd32(arg2 + 0x20u) != 0u) * 4u);
    eax = rd32(arg2 + 0x20u) != 0u;
    ecx = arg2;
    edx = t27;
    loc_1c = t28;
    goto L_10325666;
L_103255c4: ;
    wr32(COW_IMG(0x109f82d8u), rd32(COW_IMG(0x109f82d4u)));
    t29 = cow_divs(g, rd32(arg2 + 0x14u), 0x64u);
    t30 = cow_mods(g, rd32(arg2 + 0x14u), 0x64u);
    eax = t29;
    ecx = 0x64u;
    edx = t30;
    goto L_103252ed;
L_103255e7: ;
    if (rd32(COW_IMG(0x109f82d4u)) == 0u)
    {
        t32 = rd32(arg5 + 0xa0u);
        eax = arg5;
        ecx = self;
        edx = in_edx;
        loc_24 = t32;
    }
    else
    {
        wr32(COW_IMG(0x109f82d4u), 0u);
        t31 = rd32(arg5 + 0xa4u);
        eax = arg5;
        ecx = self;
        edx = in_edx;
        loc_24 = t31;
    }
    goto L_1032560a;
L_10325629: ;
    wr32(COW_IMG(0x109f82d8u), rd32(COW_IMG(0x109f82d4u)));
    t33 = rd32(arg2 + 0x18u);
    eax = arg2;
    ecx = self;
    edx = in_edx;
    loc_1c = 1u;
    loc_20 = t33;
    goto L_103253c0;
L_10325646: ;
    if ((int32_t)rd32(arg2 + 8u) > 11)
    {
        t35 = rd32(arg5 + 0x9cu);
        eax = arg5;
        ecx = self;
        edx = in_edx;
        loc_1c = t35;
    }
    else
    {
        t34 = rd32(arg5 + 0x98u);
        eax = arg5;
        ecx = self;
        edx = in_edx;
        loc_1c = t34;
    }
    goto L_10325666;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10325284(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10325284(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
