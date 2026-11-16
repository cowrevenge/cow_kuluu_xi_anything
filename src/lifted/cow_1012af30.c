/* f_0x1012af30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_1012af30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(rd32(COW_IMG(0x1057876cu)) + 0xc4u) == 0u)
    {
        ecx = rd32(COW_IMG(0x1057876cu));
    }
    else
    {
        ecx = rd32(COW_IMG(0x1057876cu));
        ecx = ecx + 0x28u;
    }
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101598b0u), ecx, 0);
    t2 = g->edx;
    if (rd8(arg2) - 3u > 0x18u)
    {
        eax = rd8(arg2) - 3u;
        goto L_1012aff0;
    }
    eax = rd8(arg2) - 3u;
    edx = t2;
    esi = t1;
    t3 = rd32(COW_IMG(0x1012b26cu) + rd8(COW_IMG(0x1012b2a8u) + eax) * 4u);
    switch (t3 - RD)
    {
    case 0x1012af6fu: ecx = rd8(COW_IMG(0x1012b2a8u) + eax); goto L_1012af6f;
    case 0x1012afb2u: goto L_1012afb2;
    case 0x1012afd3u: goto L_1012afd3;
    case 0x1012aff0u: goto L_1012aff0;
    case 0x1012aff7u: ecx = rd8(COW_IMG(0x1012b2a8u) + eax); goto L_1012aff7;
    case 0x1012b02au: goto L_1012b02a;
    case 0x1012b03du: ecx = rd8(COW_IMG(0x1012b2a8u) + eax); goto L_1012b03d;
    case 0x1012b08du: ecx = rd8(COW_IMG(0x1012b2a8u) + eax); goto L_1012b08d;
    case 0x1012b0b6u: ecx = rd8(COW_IMG(0x1012b2a8u) + eax); goto L_1012b0b6;
    case 0x1012b0e5u: ecx = rd8(COW_IMG(0x1012b2a8u) + eax); goto L_1012b0e5;
    case 0x1012b167u: ecx = rd8(COW_IMG(0x1012b2a8u) + eax); goto L_1012b167;
    case 0x1012b1b4u: ecx = rd8(COW_IMG(0x1012b2a8u) + eax); goto L_1012b1b4;
    case 0x1012b202u: ecx = rd8(COW_IMG(0x1012b2a8u) + eax); goto L_1012b202;
    case 0x1012b21bu: goto L_1012b21b;
    case 0x1012b248u: goto L_1012b248;
    default: rt_fatal(g, COW_IMG(0x1012af68u), "switch");
    }
    return 0;
L_1012af6f: ;
    if (esi == 0u) goto L_1012aff0;
    if (rd32(esi + 0x78u) != rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c390u))
    {
        edx = rd32(esi + 0x78u);
        goto L_1012afc1;
    }
    edx = rd32(esi + 0x78u);
    if (arg1 != 0u)
    {
        eax = arg1;
        goto L_1012afcc;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t47 = cow_stdcall(g, COW_IMG(0x10177730u), 0);
    t48 = g->edx;
    if ((uint8_t)t47 == 0u)
    {
        edx = t48;
    }
    else
    {
        eax = t47;
        t49 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
        g->edx = t49;
        g->esp = sp0 - 8u;
        t50 = cow_call_regs(g, COW_IMG(0x101cc320u), eax, g->ecx, g->edx, 1, 1, t49);
        t51 = g->edx;
        if ((uint8_t)t50 == 0u)
        {
            edx = t51;
        }
        else
        {
            edx = t51;
            wr8(arg2, 0xdu);
        }
    }
L_1012afc1: ;
    g->esp = sp0 - 8u;
    t52 = cow_thiscall(g, COW_IMG(0x1008e150u), esi, 0);
    if ((uint8_t)t52 == 0u)
    {
        eax = t52;
        goto L_1012aff0;
    }
    eax = t52;
L_1012afcc: ;
    return eax & 0xffffff00u;
L_1012afb2: ;
    if (esi == 0u) goto L_1012afcc;
    if (rd32(esi + 0x1d0u) >> 8u & 1u)
    {
        eax = rd32(esi + 0x1d0u);
        goto L_1012afcc;
    }
    goto L_1012afc1;
L_1012afd3: ;
    if (esi == 0u) goto L_1012aff0;
    if ((rd32(esi + 0x78u) & 0xff000000u) != 0x1000000u)
    {
        eax = rd32(esi + 0x78u) & 0xff000000u;
        goto L_1012afed;
    }
    eax = rd32(esi + 0x78u) & 0xff000000u;
    return eax & 0xffffff00u;
L_1012afed: ;
    wr8(arg2, 5u);
L_1012aff0: ;
    return (eax & 0xffffff00u) | 1u;
L_1012aff7: ;
    g->esp = sp0 - 8u;
    t46 = cow_cdecl(g, COW_IMG(0x101cc350u), 2, 0u, 0u);
    if ((uint8_t)t46 == 0u)
    {
        eax = t46;
        goto L_1012b00e;
    }
    eax = t46;
    return eax & 0xffffff00u;
L_1012b00e: ;
    if (esi == 0u) goto L_1012aff0;
    if ((rd32(esi + 0x78u) & 0xff000000u) != 0x1000000u) goto L_1012aff0;
    return eax & 0xffffff00u;
L_1012b02a: ;
    if (rd8(COW_IMG(0x10578174u)) != 1u) goto L_1012aff0;
    wr8(arg2, 2u);
    return (eax & 0xffffff00u) | 1u;
L_1012b03d: ;
    g->esp = sp0 - 8u;
    t44 = cow_call_regs(g, COW_IMG(0x10201f00u), eax, ecx, g->edx, 1, 0);
    if ((uint8_t)t44 == 0u)
    {
        eax = t44;
        goto L_1012b04d;
    }
    eax = t44;
    return eax & 0xffffff00u;
L_1012b04d: ;
    if (esi == 0u) goto L_1012b086;
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c390u) == rd32(esi + 0x78u))
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c390u);
        goto L_1012b086;
    }
    eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c390u);
    t45 = rd32(esi + 0x124u);
    if (t45 >> 0x14u & 1u) goto L_1012aff0;
    esi = t45;
    if (esi >> 0x15u & 1u) goto L_1012aff0;
L_1012b086: ;
    return eax & 0xffffff00u;
L_1012b08d: ;
    if (esi == 0u) goto L_1012b262;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t43 = cow_stdcall(g, COW_IMG(0x101cc550u), 0);
    if (esi != t43)
    {
        eax = t43;
        goto L_1012b262;
    }
    eax = t43;
    if (rd32(esi + 0x170u) != 1u) goto L_1012aff0;
    return eax & 0xffffff00u;
L_1012b0b6: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t40 = cow_cdecl(g, COW_IMG(0x101cc350u), 2, 1u, 0u);
    t41 = g->edx;
    if ((uint8_t)t40 == 0u)
    {
        edx = t41;
        goto L_1012b0cd;
    }
    eax = t40;
    return eax & 0xffffff00u;
L_1012b0cd: ;
    g->esp = sp0 - 8u;
    t42 = cow_stdcall(g, COW_IMG(0x1013eff0u), 0);
    if ((uint8_t)t42 != 0u)
    {
        eax = t42;
        goto L_1012aff0;
    }
    eax = t42;
    return eax;
L_1012b0e5: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t23 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t24 = g->edx;
    if (t23 == 0u)
    {
        edx = t24;
        esi = t23;
        goto L_1012b109;
    }
    edx = t24;
    esi = t23;
    t25 = rd32(esi + 0x170u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t26 = cow_thiscall(g, COW_IMG(0x100956a0u), esi, 1, t25);
    t27 = g->edx;
    if ((uint8_t)t26 == 0u)
    {
        edx = t27;
        goto L_1012b109;
    }
    eax = t26;
    return eax & 0xffffff00u;
L_1012b109: ;
    t28 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
    g->ecx = t28;
    g->edx = edx;
    t29 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 8u;
    t30 = cow_cdecl(g, COW_IMG(0x100fd3a0u), 1, t28);
    t31 = g->ecx;
    t32 = g->edx;
    if ((uint8_t)t30 == 0u)
    {
        eax = t30;
        ecx = t31;
        edx = t32;
        goto L_1012b137;
    }
    eax = t30;
    edx = t32;
    if (esi == 0u) goto L_1012b130;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t33 = cow_thiscall(g, COW_IMG(0x1009aaf0u), esi, 0);
    t34 = g->ecx;
    t35 = g->edx;
    if ((uint8_t)t33 != 0u)
    {
        eax = t33;
        ecx = t34;
        edx = t35;
        goto L_1012b137;
    }
    eax = t33;
L_1012b130: ;
    return eax & 0xffffff00u;
L_1012b137: ;
    if (esi == 0u) goto L_1012b150;
    if ((rd8(esi + 0x123u) & 7u) != 4u)
    {
        edx = (edx & 0xffffff00u) | (rd8(esi + 0x123u) & 7u);
        goto L_1012b150;
    }
    return eax & 0xffffff00u;
L_1012b150: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t36 = cow_call_regs(g, COW_IMG(0x101cc4c0u), eax, g->ecx, g->edx, 1, 0);
    t37 = g->ecx;
    t38 = g->edx;
    if ((uint8_t)t36 == 1u)
    {
        eax = t36;
        goto L_1012aff0;
    }
    ecx = t37;
    edx = t38;
    g->esp = sp0 - 8u;
    t39 = cow_stdcall(g, COW_IMG(0x10177750u), 0);
    return t39;
L_1012b167: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_cdecl(g, COW_IMG(0x101cc350u), 2, 0u, 0u);
    t16 = g->ecx;
    t17 = g->edx;
    if ((uint8_t)t15 == 0u)
    {
        ecx = t16;
        edx = t17;
        goto L_1012b17e;
    }
    eax = t15;
    return eax & 0xffffff00u;
L_1012b17e: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t18 = cow_stdcall(g, COW_IMG(0x10177730u), 0);
    t19 = g->ecx;
    t20 = g->edx;
    if ((uint8_t)t18 == 0u) goto L_1012b1ad;
    ecx = t19;
    edx = t20;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_1012b1ad;
    eax = rd32(COW_IMG(0x104dfd98u));
    t21 = rd32(eax + 0x3c350u);
    g->esp = sp0 - 8u;
    t22 = cow_call_regs(g, COW_IMG(0x101cc320u), t21, g->ecx, g->edx, 1, 1, t21);
    if ((uint8_t)t22 == 0u) goto L_1012b1ad;
    return 1u;
L_1012b1ad: ;
    return 0u;
L_1012b1b4: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_cdecl(g, COW_IMG(0x101cc350u), 2, 1u, 1u);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        goto L_1012b1c9;
    }
    eax = t10;
    return eax;
L_1012b1c9: ;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t13 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t14 = g->ecx;
    if (t13 == 0u)
    {
        eax = t13;
        goto L_1012aff0;
    }
    eax = t13;
    ecx = t14;
    if (rd8(eax + 0x1ffu) < 5u) goto L_1012b1ea;
    ecx = (ecx & 0xffffff00u) | rd8(eax + 0x1ffu);
    if ((uint8_t)ecx <= 6u) goto L_1012aff0;
L_1012b1ea: ;
    if (rd32(eax + 0x27cu) == 0u) goto L_1012aff0;
    wr8(arg2, 0x17u);
    return (eax & 0xffffff00u) | 1u;
L_1012b202: ;
    g->esp = sp0 - 8u;
    t9 = cow_cdecl(g, COW_IMG(0x101cc350u), 2, 1u, 1u);
    if ((uint8_t)t9 != 0u)
    {
        eax = t9;
        goto L_1012aff0;
    }
    eax = t9;
    return eax;
L_1012b21b: ;
    if (rd32(COW_IMG(0x1057876cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057876cu));
        goto L_1012b235;
    }
    ecx = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x1012aed0u), 1, 0u);
    return t4;
L_1012b235: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x101598a0u), eax, ecx, g->edx, 1, 0);
    t6 = g->ecx;
    t7 = g->edx;
    t8 = cow_cdecl(g, COW_IMG(0x1012aed0u), 1, t5);
    return t8;
L_1012b248: ;
    if (esi == 0u) goto L_1012aff0;
    if (rd32(esi + 0x140u) >> 3u & 1u) goto L_1012aff0;
L_1012b262: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012af30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012af30(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
