/* f_0x101327d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101327d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg2 < 0)
    {
        eax = in_eax;
        goto L_10132a42;
    }
    g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)(in_ebx | 0xffu);
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    t1 = rd32(sp0 - 0x10u);
    t2 = rd32(sp0 - 0xcu);
    g->esp = sp0 - 0x20u;
    t3 = cow_stdcall(g, COW_IMG(0x100e5290u), 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)(in_ebx | 0xffu);
        esi = 0u;
        loc_10 = (t1 & 0xffffff00u) | 0xffu;
        loc_c = (t2 & 0xffffff00u) | (uint8_t)(in_ebx | 0xffu);
        loc_4 = 0u;
        loc_8 = 0u;
        goto L_10132837;
    }
    eax = t3;
    edx = t5;
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)(in_ebx | 0xffu);
    esi = 0u;
    loc_10 = (t1 & 0xffffff00u) | 0xffu;
    loc_c = (t2 & 0xffffff00u) | (uint8_t)(in_ebx | 0xffu);
    loc_8 = 0u;
L_10132802: ;
    if (arg2 != rd32(eax))
    {
        ecx = rd32(eax);
    }
    else
    {
        ecx = rd32(eax);
        t6 = rd8(eax + 5u);
        edx = t6;
        ebx = (ebx & 0xffffff00u) | rd8(eax + 4u);
        esi = t6;
    }
    if (ecx == 0u)
    {
        t7 = rd8(eax + 5u);
        ecx = (ecx & 0xffffff00u) | rd8(eax + 4u);
        edx = t7;
        loc_10 = (loc_10 & 0xffffff00u) | rd8(eax + 4u);
        loc_8 = t7;
    }
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t8 = cow_stdcall(g, COW_IMG(0x100e52c0u), 0);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 != 0u)
    {
        eax = t8;
        edx = t10;
        goto L_10132802;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    loc_c = (loc_c & 0xffffff00u) | (uint8_t)ebx;
    loc_4 = esi;
L_10132837: ;
    if (arg1 != 0u) goto L_10132881;
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t11 = cow_stdcall(g, COW_IMG(0x100fd350u), 0);
    if ((1u << (arg2 & 0x1fu) & t11) != 0u)
    {
        eax = t11;
        goto L_10132a42;
    }
    g->eax = arg3;
    g->esp = sp0 - 0x20u;
    t12 = cow_cdecl(g, COW_IMG(0x100e5340u), 3, arg2, arg1, arg3);
    if ((uint8_t)ebx == 0xffu)
    {
        eax = t12;
        goto L_10132a42;
    }
    eax = t12;
    if ((uint8_t)ebx != 0u) goto L_10132b80;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_10132881: ;
    if ((uint8_t)arg4 == 0u) goto L_101328bb;
    eax = (eax & 0xffffff00u) | (uint8_t)arg4;
    if ((uint8_t)ebx == 0xffu) goto L_101328bb;
    if ((uint8_t)ebx == 0u) goto L_101328bb;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t13 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, esi, loc_c);
    t14 = g->edx;
    if (t13 == 0u)
    {
        eax = t13;
        goto L_10132a42;
    }
    eax = t13;
    edx = t14;
    if (rd16(eax) != rd16(arg1))
    {
        edx = (edx & 0xffff0000u) | rd16(eax);
        goto L_101328bb;
    }
    edx = (edx & 0xffff0000u) | rd16(eax);
    if (esi == arg3) goto L_10132a42;
L_101328bb: ;
    g->eax = rd16(arg1);
    g->edx = edx;
    t15 = rd16(arg1);
    t16 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x20u;
    t17 = cow_thiscall(g, COW_IMG(0x1015bc40u), t16, 1, t15);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 == 0u)
    {
        eax = t17;
        goto L_10132a42;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
    esi = t17;
    t20 = rd8(esi + 0x1b3u);
    wr8(esi + 0x1b3u, (uint8_t)(t20 + 1u));
    g->eax = (eax & 0xffffff00u) | (uint8_t)(t20 + 1u);
    g->esp = sp0 - 0x18u;
    t21 = cow_call_regs(g, COW_IMG(0x1015a680u), g->eax, g->ecx, edx, 1, 3, esi, in_edi, in_esi);
    t22 = g->edx;
    if (arg2 != 1u)
    {
        eax = t21;
        edx = t22;
        ebp = t21;
        goto L_10132a17;
    }
    eax = t21;
    edx = t22;
    ebp = t21;
    if (rd16(rd32(ebp + 0x14b4u)) != 4u) goto L_10132a17;
    ecx = rd32(ebp + 0x14b4u);
    if (!(rd8(rd32(ebp + 0x14d4u)) & 1u))
    {
        edx = rd32(ebp + 0x14d4u);
        goto L_10132a17;
    }
    edx = rd32(ebp + 0x14d4u);
    if (!(rd8(COW_IMG(0x10485824u)) & 1u)) goto L_10132965;
    if (rd8(COW_IMG(0x10485640u)) == 0xdu) goto L_10132965;
    ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
    if (rd8(COW_IMG(0x10485642u)) == 0xdu)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485642u));
        goto L_10132965;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485642u));
    if ((uint8_t)ecx == 6u) goto L_10132965;
    if ((uint8_t)eax == 6u) goto L_10132965;
    if ((uint8_t)ecx == 0x13u) goto L_10132965;
    if ((uint8_t)eax == 0x13u) goto L_10132965;
    if ((uint8_t)ecx == 0x10u) goto L_10132965;
    if ((uint8_t)eax == 0x10u) goto L_10132965;
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t23 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x8bu);
    eax = t23;
L_10132a3c: ;
    wr8(esi + 0x1b3u, (uint8_t)(rd8(esi + 0x1b3u) - 1u));
L_10132a42: ;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_10132965: ;
    if ((uint8_t)loc_10 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)loc_10;
        goto L_10132a4e;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)loc_10;
    if ((uint8_t)eax == 0xffu) goto L_10132a4e;
    g->eax = loc_10;
    g->esp = sp0 - 0x20u;
    t24 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, loc_8, loc_10);
    if (t24 == 0u)
    {
        eax = t24;
        goto L_10132a3c;
    }
    eax = t24;
    g->eax = eax;
    g->edx = rd16(eax);
    t25 = rd32(COW_IMG(0x10621808u));
    t26 = rd16(eax);
    g->esp = sp0 - 0x20u;
    t27 = cow_thiscall(g, COW_IMG(0x1015bc40u), t25, 1, t26);
    t28 = g->ecx;
    t29 = g->edx;
    if (t27 == 0u)
    {
        eax = t27;
        goto L_10132a3c;
    }
    eax = t27;
    ecx = t28;
    edx = t29;
    edi = t27;
    t30 = rd8(edi + 0x1b3u);
    wr8(edi + 0x1b3u, (uint8_t)(t30 + 1u));
    t31 = (eax & 0xffff0000u) | rd16(edi + 0x10u);
    g->eax = t31;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t32 = cow_cdecl(g, COW_IMG(0x1015aa70u), 1, t31);
    t33 = g->edx;
    if ((uint8_t)t32 == 0u)
    {
        eax = t32;
        edx = t33;
        goto L_10132a05;
    }
    eax = t32;
    edx = t33;
    g->ebx = ebx;
    g->eax = eax;
    t34 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 0x20u;
    t35 = cow_thiscall(g, COW_IMG(0x10129e30u), t34, 1, 0x99u);
    t36 = g->ecx;
    wr8(esi + 0x1b3u, (uint8_t)(rd8(esi + 0x1b3u) - 1u));
    t37 = rd8(edi + 0x1b3u);
    wr8(edi + 0x1b3u, (uint8_t)(t37 - 1u));
    g->ebx = in_ebx;
    return t35 & 0xffffff00u;
L_10132a05: ;
    t38 = rd8(edi + 0x1b3u);
    wr8(edi + 0x1b3u, (uint8_t)(t38 - 1u));
    eax = (eax & 0xffffff00u) | (uint8_t)(t38 - 1u);
    ebx = (ebx & 0xffffff00u) | (uint8_t)loc_c;
L_10132a17: ;
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t40 = cow_thiscall(g, COW_IMG(0x10132050u), rd32(COW_IMG(0x105781a8u)), 1, ebp);
    t41 = g->edx;
    if ((uint8_t)t40 == 0u)
    {
        eax = t40;
        goto L_10132a3c;
    }
    eax = t40;
    edx = t41;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t42 = cow_stdcall(g, COW_IMG(0x10132180u), 2, ebp, arg2);
    t43 = g->edx;
    if ((uint8_t)t42 != 0u)
    {
        eax = t42;
        edx = t43;
        goto L_10132a60;
    }
    eax = t42;
    goto L_10132a3c;
L_10132a4e: ;
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t39 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x98u);
    eax = t39;
    goto L_10132a3c;
L_10132a60: ;
    t44 = rd8(esi + 0x1b3u);
    wr8(esi + 0x1b3u, (uint8_t)(t44 - 1u));
    if (rd8(arg1 + 2u) != (uint8_t)ebx)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 2u);
        edx = (edx & 0xffffff00u) | (uint8_t)(t44 - 1u);
        goto L_10132a8f;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + 2u);
    edx = (edx & 0xffffff00u) | (uint8_t)(t44 - 1u);
    if (arg3 != loc_4) goto L_10132a8f;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_10132a8f: ;
    if (arg3 != 0xbu) goto L_10132ab8;
    if (rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 2u & 1u)
    {
        edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 2u;
        goto L_10132b75;
    }
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_10132ab8: ;
    if (arg3 != 0xcu) goto L_10132ae1;
    if (rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 3u & 1u)
    {
        edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 3u;
        goto L_10132b75;
    }
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_10132ae1: ;
    if (arg3 != 0xdu) goto L_10132b06;
    if (rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 4u & 1u)
    {
        edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 4u;
        goto L_10132b75;
    }
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_10132b06: ;
    if (arg3 != 0xeu) goto L_10132b2b;
    if (rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 5u & 1u)
    {
        edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 5u;
        goto L_10132b75;
    }
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_10132b2b: ;
    if (arg3 != 0xfu) goto L_10132b50;
    if (rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 6u & 1u)
    {
        edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 6u;
        goto L_10132b75;
    }
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_10132b50: ;
    if (arg3 != 0x10u) goto L_10132b75;
    if (rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 7u & 1u)
    {
        edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 7u;
        goto L_10132b75;
    }
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_10132b75: ;
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t45 = cow_cdecl(g, COW_IMG(0x100e5340u), 3, arg2, eax, arg3);
    eax = t45;
L_10132b80: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101327d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101327d0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
