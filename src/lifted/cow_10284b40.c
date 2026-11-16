/* f_0x10284b40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10284b40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u);
    wr32(rd32(COW_IMG(0x1099d200u)) + t1 * 8u + 0xa20u, arg1);
    t2 = rd32(sp0 + 8u);
    wr32(t1 * 8u + rd32(COW_IMG(0x1099d200u)) + 0xa24u, t2);
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) != 0u)
    {
        eax = rd32(COW_IMG(0x1099d200u));
    }
    else
    {
        eax = rd32(COW_IMG(0x1099d200u));
        t3 = rd32(eax + 0xa24u);
        t4 = rd32(eax + 0xa20u);
        wr32(sp0 + 8u, t3);
        if ((t4 & 0x4000u) == 0u)
        {
            ecx = t4;
            goto L_10284b97;
        }
        loc_4 = 3u;
L_10284bb9: ;
        g->eax = rd32(COW_IMG(0x1066941cu));
        g->edx = 0u;
        t10 = rd32(COW_IMG(0x1066941cu));
        t11 = rd32(rd32(COW_IMG(0x1066941cu)));
        g->esp = sp0;
        t12 = cow_thiscall(g, rd32(t11 + 0xc8u), t11, 3, t10, 0x16u, loc_4);
        t13 = g->ecx;
        t14 = g->edx;
        eax = t12;
        ecx = t13;
        edx = t14;
L_10284bc9: ;
        g->esp = sp0;
        cow_stdcall(g, COW_IMG(0x10284ed0u), 0);
        eax = rd32(COW_IMG(0x1099d200u));
    }
    wr32(eax + rd32(eax + 0xb18u) * 4u + 0xa34u, 1u);
    t15 = rd32(rd32(COW_IMG(0x1099d200u)) + rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) * 8u + 0xa24u);
    t16 = rd32(COW_IMG(0x1099d200u));
    t17 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u);
    t18 = rd32(rd32(COW_IMG(0x1099d200u)) + rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) * 8u + 0xa20u);
    wr32(sp0 + 8u, t15);
    if ((t18 & 0x400000u) != 0u)
    {
        eax = t16;
        edx = t17;
        goto L_10284c22;
    }
    eax = t16;
    edx = t17;
    esi = t18;
    if ((esi & 0x8000000u) == 0u) goto L_10284c37;
L_10284c22: ;
    t19 = rd32(eax + edx * 4u + 0xa34u) | 8u;
    wr32(eax + edx * 4u + 0xa34u, t19);
    eax = rd32(COW_IMG(0x1099d200u));
L_10284c37: ;
    if (rd32(eax + rd32(eax + 0xb18u) * 8u + 0xa20u) & 1u)
    {
        edx = rd32(eax + 0xb18u);
        t20 = rd32(eax + edx * 4u + 0xa34u) | 8u;
        wr32(eax + edx * 4u + 0xa34u, t20);
        eax = rd32(COW_IMG(0x1099d200u));
    }
    if ((rd32(eax + rd32(eax + 0xb18u) * 8u + 0xa20u) & 4u) != 0u)
    {
        edx = rd32(eax + 0xb18u);
        t21 = rd32(eax + edx * 4u + 0xa34u) | 4u;
        wr32(eax + edx * 4u + 0xa34u, t21);
        eax = rd32(COW_IMG(0x1099d200u));
    }
    if ((rd32(eax + rd32(eax + 0xb18u) * 8u + 0xa20u) & 2u) != 0u)
    {
        edx = rd32(eax + 0xb18u);
        t22 = rd32(eax + edx * 4u + 0xa34u) | 2u;
        wr32(eax + edx * 4u + 0xa34u, t22);
        eax = rd32(COW_IMG(0x1099d200u));
    }
    if ((rd32(eax + rd32(eax + 0xb18u) * 8u + 0xa20u) & 0x40u) != 0u)
    {
        ecx = rd32(eax + rd32(eax + 0xb18u) * 8u + 0xa20u) & 0x40u;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = 0u;
        g->esp = sp0 - 8u;
        t23 = cow_cdecl(g, COW_IMG(0x10281ca0u), 1, 1u);
        t24 = g->ecx;
        t25 = g->edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10281c70u), 1, 1u);
        t26 = rd32(rd32(COW_IMG(0x1099d200u)) + rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) * 4u + 0xa34u) | 2u;
        wr32(rd32(COW_IMG(0x1099d200u)) + rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) * 4u + 0xa34u, t26);
        eax = rd32(COW_IMG(0x1099d200u));
    }
    if ((rd32(eax + rd32(eax + 0xb18u) * 8u + 0xa20u) & 0x20000000u) != 0u)
    {
        ecx = rd32(eax + rd32(eax + 0xb18u) * 8u + 0xa20u) & 0x20000000u;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = 0u;
        g->esp = sp0 - 8u;
        t27 = cow_cdecl(g, COW_IMG(0x10281ca0u), 1, 1u);
        t28 = g->ecx;
        t29 = g->edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10281c70u), 1, 1u);
        t30 = rd32(rd32(COW_IMG(0x1099d200u)) + rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) * 4u + 0xa34u) | 4u;
        wr32(rd32(COW_IMG(0x1099d200u)) + rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) * 4u + 0xa34u, t30);
        eax = rd32(COW_IMG(0x1099d200u));
    }
    if ((rd32(eax + rd32(eax + 0xb18u) * 8u + 0xa20u) & 0x40000000u) != 0u)
    {
        edx = rd32(eax + 0xb18u);
        t31 = rd32(eax + edx * 4u + 0xa34u) | 2u;
        wr32(eax + edx * 4u + 0xa34u, t31);
        eax = rd32(COW_IMG(0x1099d200u));
    }
    if ((rd32(eax + rd32(eax + 0xb18u) * 8u + 0xa20u) & 0x20u) != 0u)
    {
        edx = rd32(eax + 0xb18u);
        t32 = rd32(eax + edx * 4u + 0xa34u) | 6u;
        wr32(eax + edx * 4u + 0xa34u, t32);
        eax = rd32(COW_IMG(0x1099d200u));
    }
    if ((rd32(eax + rd32(eax + 0xb18u) * 8u + 0xa20u) & 8u) != 0u)
    {
        ecx = rd32(eax + rd32(eax + 0xb18u) * 8u + 0xa20u) & 8u;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = 0u;
        g->esp = sp0 - 8u;
        t33 = cow_cdecl(g, COW_IMG(0x10281c70u), 1, 1u);
        t34 = g->ecx;
        t35 = g->edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10281ca0u), 1, 0u);
        t36 = rd32(rd32(COW_IMG(0x1099d200u)) + rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) * 4u + 0xa34u) | 4u;
        wr32(rd32(COW_IMG(0x1099d200u)) + rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) * 4u + 0xa34u, t36);
        eax = rd32(COW_IMG(0x1099d200u));
    }
    if ((rd32(eax + rd32(eax + 0xb18u) * 8u + 0xa20u) & 0x100000u) != 0u)
    {
        ecx = rd32(eax + rd32(eax + 0xb18u) * 8u + 0xa20u) & 0x100000u;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10281ca0u), 1, 1u);
        t37 = rd32(rd32(COW_IMG(0x1099d200u)) + rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) * 4u + 0xa34u) | 0xeu;
        wr32(rd32(COW_IMG(0x1099d200u)) + rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) * 4u + 0xa34u, t37);
        eax = rd32(COW_IMG(0x1099d200u));
    }
    if ((rd32(eax + rd32(eax + 0xb18u) * 8u + 0xa20u) & 0x40000u) != 0u)
    {
        edx = rd32(eax + 0xb18u);
        t38 = rd32(eax + edx * 4u + 0xa34u) | 8u;
        wr32(eax + edx * 4u + 0xa34u, t38);
        eax = rd32(COW_IMG(0x1099d200u));
    }
    if ((rd32(eax + rd32(eax + 0xb18u) * 8u + 0xa20u) & 0x10u) != 0u)
    {
        ecx = rd32(eax + rd32(eax + 0xb18u) * 8u + 0xa20u) & 0x10u;
        edx = rd32(eax + 0xb18u);
        t39 = rd32(eax + edx * 4u + 0xa34u) | 0xcu;
        wr32(eax + edx * 4u + 0xa34u, t39);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t40 = cow_cdecl(g, COW_IMG(0x10281c70u), 1, 0u);
        t41 = g->ecx;
        t42 = g->edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10281ca0u), 1, 1u);
        eax = rd32(COW_IMG(0x1099d200u));
    }
    if (rd32(eax + 0xb18u) != 0u)
    {
        edx = rd32(eax + 0xa34u);
        goto L_10284eb4;
    }
    edx = rd32(eax + 0xa34u);
    wr32(eax + 0xa30u, edx);
    wr32(COW_IMG(0x109a2740u), 1u);
    return;
L_10284b97: ;
    if ((ecx & 0x8000u) == 0u) goto L_10284bb7;
    ecx = ecx & 0x8000u;
    g->eax = rd32(COW_IMG(0x1066941cu));
    g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
    t5 = rd32(COW_IMG(0x1066941cu));
    t6 = rd32(rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0;
    t7 = cow_thiscall(g, rd32(t6 + 0xc8u), ecx, 3, t5, 0x16u, 2u);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    goto L_10284bc9;
L_10284bb7: ;
    loc_4 = 1u;
    goto L_10284bb9;
L_10284eb4: ;
    t43 = rd32(eax + 0xa38u) | edx;
    wr32(eax + 0xa30u, t43);
    wr32(COW_IMG(0x109a2740u), 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10284b40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10284b40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
