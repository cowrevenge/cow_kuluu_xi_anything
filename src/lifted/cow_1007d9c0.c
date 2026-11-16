/* f_0x1007d9c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007d9c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_9c;
    uint32_t loc_ac;
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
    uint32_t t36;
    uint32_t t37;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 212u);

    wr32(sp0 - 0xa0u, in_ebx);
    wr32(sp0 - 0xa4u, in_esi);
    wr32(sp0 - 0xa8u, in_edi);
    if (rd32(rd32(COW_IMG(0x103551e0u)) + 4u) == 0u)
    {
        edx = in_edx;
        goto L_1007dbe4;
    }
    eax = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    loc_9c = ((((rd32(sp0 - 0x9cu) & 0xffffff00u) | 0x87u) & 0xffff00ffu) | 0x100u) & 0xff00ffffu;
    wr32(sp0 - 0xacu, eax);
    wr32(sp0 - 0xb0u, COW_IMG(0x10357a74u));
    g->esp = sp0 - 0x94u;
    t1 = cow_call_regs(g, COW_IMG(0x10077ba0u), eax, self, in_edx, 1, 7, COW_IMG(0x10357a74u), eax, in_edi, in_esi, in_ebx, loc_9c, rd32(sp0 - 0x98u));
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        edx = t3;
        goto L_1007dbe4;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    if ((uint32_t)(int8_t)rd8(eax + 5u) == 0u)
    {
        eax = (uint32_t)(int8_t)rd8(eax + 5u);
        goto L_1007da8b;
    }
    eax = (uint32_t)(int8_t)rd8(eax + 5u);
    if (eax != 1u) goto L_1007dbe4;
    eax = eax - 1u;
    wr32(sp0 - 0xacu, 1u);
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xb4u, 1u);
    t4 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    wr32(sp0 - 0xb8u, t4);
    g->esp = sp0 - 0x6cu;
    t5 = cow_bridge_indirect(g, COW_IMG(0x1007a1c0u), 0u, 19u, (const uint32_t[]){t4, 1u, 0u, 1u, rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u)}, rd32(COW_IMG(0x103551e0u)), t4, eax, 76u);
    t6 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        goto L_1007da54;
    }
    edx = t6;
    wr32(sp0 - 0xacu, COW_IMG(0x1007dd40u));
    t7 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    wr32(sp0 - 0xb0u, t7);
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    cow_cdecl(g, COW_IMG(0x1007c740u), 2, t7, COW_IMG(0x1007dd40u));
    t8 = g->edx;
    g->ebx = rd32(sp0 - 0xa0u);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = rd32(sp0 - 0xa8u);
    g->edx = t8;
    return arg3;
L_1007da54: ;
    t9 = rd32(eax + 4u);
    if ((t9 & 0xff000000u) == 0x1000000u)
    {
        edx = t9 & 0xff000000u;
        ebx = 0u;
        goto L_1007dbd4;
    }
    ecx = t9;
    edx = t9 & 0xff000000u;
    t10 = (eax & 0xffff0000u) | rd16(eax);
    wr32(sp0 - 0xacu, t10);
    wr32(sp0 - 0xb0u, ecx);
    wr32(sp0 - 0xb4u, 1u);
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    cow_cdecl(g, COW_IMG(0x100e9590u), 3, 1u, ecx, t10);
    t11 = g->edx;
    g->ebx = rd32(sp0 - 0xa0u);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = rd32(sp0 - 0xa8u);
    g->edx = t11;
    return arg3;
L_1007da8b: ;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t12 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t13 = g->edx;
    if (t12 != 0u)
    {
        edx = t13;
        edi = t12;
        goto L_1007daa0;
    }
    edx = t13;
    ebx = 1u;
L_1007dbbb: ;
    if (ebx == 1u) goto L_1007dbd4;
    eax = ebx - 1u;
    if (eax == 1u) goto L_1007dbcd;
    eax = eax - 1u;
    if (eax != 1u) goto L_1007dbe4;
    wr32(sp0 - 0xacu, 0xc6u);
    loc_ac = 0xc6u;
L_1007dbd9: ;
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, loc_ac);
    t37 = g->edx;
    edx = t37;
L_1007dbe4: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return arg3;
L_1007daa0: ;
    t14 = rd32(edi + 0x124u);
    if (t14 >> 0x17u & 1u) goto L_1007dab7;
    eax = t14;
    ecx = t14 >> 0x17u;
    if (!(eax >> 0x16u & 1u)) goto L_1007dac1;
L_1007dab7: ;
    ebx = 3u;
    goto L_1007dbbb;
L_1007dac1: ;
    wr32(sp0 - 0xacu, 1u);
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xb4u, 1u);
    t15 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    wr32(sp0 - 0xb8u, t15);
    t16 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 0x6cu;
    t17 = cow_bridge_indirect(g, COW_IMG(0x1007a1c0u), 0u, 19u, (const uint32_t[]){t15, 1u, 0u, 1u, rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u)}, ecx, t16, t15, 76u);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 != 0u)
    {
        ecx = t18;
        edx = t19;
        esi = t17;
        goto L_1007db06;
    }
    wr32(sp0 - 0xacu, COW_IMG(0x1007dc00u));
    t20 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    wr32(sp0 - 0xb0u, t20);
    g->edx = t20;
    g->esp = sp0 - 0xa8u;
    cow_cdecl(g, COW_IMG(0x1007c740u), 2, t20, COW_IMG(0x1007dc00u));
    t21 = g->edx;
    g->ebx = rd32(sp0 - 0xa0u);
    g->esi = rd32(sp0 - 0xa4u);
    g->edi = rd32(sp0 - 0xa8u);
    g->edx = t21;
    return arg3;
L_1007db06: ;
    t22 = rd32(esi + 4u);
    wr32(sp0 - 0xacu, t22);
    g->edx = edx;
    g->esp = sp0 - 0xa8u;
    t23 = cow_thiscall_cdecl(g, COW_IMG(0x100a1760u), ecx, 1, t22);
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0xb0u, t23);
    g->edx = t25;
    g->esp = sp0 - 0xacu;
    t26 = cow_thiscall_cdecl(g, COW_IMG(0x100e0a50u), t24, 1, t23);
    t27 = g->edx;
    if (t26 != 1u)
    {
        eax = t26;
        edx = t27;
        if (eax == 0u)
        {
            if (rd32(esi + 4u) != rd32(edi + 0x78u))
            {
                eax = rd32(esi + 4u);
                if ((eax & 0xff000000u) != 0x1000000u)
                {
                    ecx = eax & 0xff000000u;
                    t28 = (edx & 0xffff0000u) | rd16(esi);
                    wr32(sp0 - 0xacu, t28);
                    wr32(sp0 - 0xb0u, eax);
                    wr32(sp0 - 0xb4u, 0u);
                    g->ecx = ecx;
                    g->edx = t28;
                    g->esp = sp0 - 0xa8u;
                    t29 = cow_cdecl(g, COW_IMG(0x100e9590u), 3, 0u, eax, t28);
                    t30 = g->ecx;
                    t31 = g->edx;
                    if ((uint8_t)t29 != 1u)
                    {
                        edx = t31;
                        ebx = 0u;
                    }
                    else
                    {
                        ecx = t30;
                        edx = t31;
                        t32 = rd32(esi + 4u);
                        wr32(sp0 - 0xacu, t32);
                        g->edx = edx;
                        g->esp = sp0 - 0xa8u;
                        t33 = cow_thiscall_cdecl(g, COW_IMG(0x100a1760u), ecx, 1, t32);
                        t34 = g->edx;
                        wr32(sp0 - 0xb0u, t33);
                        wr32(sp0 - 0xb4u, 0x16u);
                        wr32(sp0 - 0xb8u, sp0 - 0x98u);
                        g->ebx = 0u;
                        g->ecx = sp0 - 0x98u;
                        g->esp = sp0 - 0xacu;
                        cow_cdecl(g, COW_IMG(0x100da580u), 3, sp0 - 0x98u, 0x16u, t33);
                        t35 = g->ecx;
                        wr32(sp0 - 0xbcu, sp0 - 0x98u);
                        wr32(sp0 - 0xc0u, 1u);
                        wr32(sp0 - 0xc4u, 0x76u);
                        wr32(sp0 - 0xc8u, 0xau);
                        wr32(sp0 - 0xccu, 0x80u);
                        wr32(sp0 - 0xd0u, sp0 - 0x80u);
                        g->esp = sp0 - 0xb8u;
                        cow_cdecl(g, COW_IMG(0x10153180u), 6, sp0 - 0x80u, 0x80u, 0xau, 0x76u, 1u, sp0 - 0x98u);
                        wr32(sp0 - 0xacu, 0u);
                        wr32(sp0 - 0xb0u, 1u);
                        wr32(sp0 - 0xb4u, 0u);
                        wr32(sp0 - 0xb8u, sp0 - 0x9cu);
                        wr32(sp0 - 0xbcu, sp0 - 0x80u);
                        g->ebx = 0u;
                        g->edx = sp0 - 0x80u;
                        g->esp = sp0 - 0xa8u;
                        cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x80u, sp0 - 0x9cu, 0u, 1u, 0u);
                        t36 = g->edx;
                        edx = t36;
                        ebx = 0u;
                    }
                }
                else
                {
                    ebx = 1u;
                }
            }
            else
            {
                ebx = 1u;
            }
        }
        else
        {
            ebx = 3u;
        }
    }
    else
    {
        edx = t27;
        ebx = 2u;
    }
    goto L_1007dbbb;
L_1007dbcd: ;
    wr32(sp0 - 0xacu, 0xc5u);
    loc_ac = 0xc5u;
    goto L_1007dbd9;
L_1007dbd4: ;
    wr32(sp0 - 0xacu, 0xc4u);
    loc_ac = 0xc4u;
    goto L_1007dbd9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007d9c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007d9c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
