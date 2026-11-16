/* f_0x10105640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10105640(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 4u, 0u);
    if ((arg2 & 0x1fu) > 0x10u)
    {
        eax = 0u;
        goto L_101057aa;
    }
    t1 = rd32(COW_IMG(0x101058e8u) + rd8(COW_IMG(0x10105910u) + (arg2 & 0x1fu)) * 4u);
    switch (t1 - RD)
    {
    case 0x10105669u: edx = rd8(COW_IMG(0x10105910u) + (arg2 & 0x1fu)); goto L_10105669;
    case 0x1010573au: goto L_1010573a;
    case 0x101057aau: eax = 0u; goto L_101057aa;
    case 0x101057afu: goto L_101057af;
    case 0x101057d7u: goto L_101057d7;
    case 0x101057ffu: edx = rd8(COW_IMG(0x10105910u) + (arg2 & 0x1fu)); goto L_101057ff;
    case 0x10105816u: goto L_10105816;
    case 0x1010582du: goto L_1010582d;
    case 0x10105844u: goto L_10105844;
    case 0x1010586cu: goto L_1010586c;
    default: rt_fatal(g, COW_IMG(0x10105662u), "switch");
    }
    return 0;
L_10105669: ;
    wr32(sp0 - 4u, arg5);
    wr32(sp0 - 0x14u, in_ebp);
    if (rd8(arg5) == 0u)
    {
        eax = arg5;
        ecx = rd8(arg5);
        loc_4 = arg5;
        goto L_101056bd;
    }
    eax = arg5;
    ecx = rd8(arg5);
    loc_4 = arg5;
L_10105681: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        ecx = rd8(rd32(COW_IMG(0x103d0030u)) + (uint32_t)(int8_t)rd8(eax) * 2u) & 8u;
        edx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        wr32(sp0 - 0x18u, 8u);
        wr32(sp0 - 0x1cu, (uint32_t)(int8_t)rd8(eax));
        g->edx = edx;
        t15 = rd8(eax);
        g->esp = sp0 - 0x10u;
        t16 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, (uint32_t)(int8_t)t15, 8u, in_ebp);
        t17 = g->edx;
        eax = rd32(sp0 - 4u);
        ecx = t16;
        edx = t17;
    }
    if (ecx == 0u) goto L_101056bd;
    wr32(sp0 - 4u, eax + 1u);
    if (rd8(eax + 1u) != 0u)
    {
        loc_4 = eax + 1u;
        eax = eax + 1u;
        goto L_10105681;
    }
    loc_4 = eax + 1u;
    eax = eax + 1u;
L_101056bd: ;
    if (rd8(eax) != 0x22u)
    {
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        wr32(sp0 - 4u, eax + 1u);
        ebx = (in_ebx & 0xffffff00u) | 0x22u;
        loc_4 = eax + 1u;
        eax = eax + 1u;
    }
    if (rd8(eax) == 0u)
    {
        ebp = arg1 + 0xcu;
        goto L_10105727;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    ebp = arg1 + 0xcu;
    esi = 0u;
L_101056d6: ;
    if ((uint8_t)ebx == (uint8_t)ecx) goto L_10105727;
    if ((uint8_t)ebx != 0u) goto L_10105710;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        ecx = rd8((uint32_t)(int8_t)ecx * 2u + rd32(COW_IMG(0x103d0030u))) & 8u;
        edx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        wr32(sp0 - 0x18u, 8u);
        wr32(sp0 - 0x1cu, (uint32_t)(int8_t)ecx);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t18 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, (uint32_t)(int8_t)ecx, 8u, in_ebp);
        t19 = g->edx;
        eax = rd32(sp0 - 4u);
        ecx = t18;
        edx = t19;
    }
    if (ecx != 0u) goto L_10105730;
L_10105710: ;
    if ((int32_t)esi < 15)
    {
        t20 = rd8(eax);
        wr8(ebp, (uint8_t)t20);
        ecx = (ecx & 0xffffff00u) | t20;
        ebp = ebp + 1u;
        esi = esi + 1u;
    }
    wr32(sp0 - 4u, eax + 1u);
    if (rd8(eax + 1u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        loc_4 = eax + 1u;
        eax = eax + 1u;
        goto L_101056d6;
    }
    loc_4 = eax + 1u;
    eax = eax + 1u;
L_10105727: ;
    if ((uint8_t)ebx != 0u)
    {
        if ((uint8_t)ebx == rd8(eax))
        {
            eax = eax + 1u;
        }
    }
L_10105730: ;
    wr8(ebp, 0u);
    return eax;
L_1010573a: ;
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, arg5);
    wr32(sp0 - 0x1cu, arg4);
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall_cdecl(g, COW_IMG(0x10105930u), arg4, 3, arg4, arg5, sp0 - 4u);
    wr16(arg1 + 0x22u, (uint16_t)t13);
    if ((int16_t)t13 >= 0)
    {
        eax = t13;
        ecx = 0u;
        edx = arg1 + 0x24u;
        esi = in_esi;
L_10105765: ;
        if ((int16_t)rd16(edx) < 0) goto L_1010577d;
        esi = (esi & 0xffff0000u) | rd16(edx);
        if ((uint16_t)esi == (uint16_t)eax) goto L_1010577d;
        if ((int32_t)(ecx + 1u) < 16)
        {
            ecx = ecx + 1u;
            edx = edx + 2u;
            goto L_10105765;
        }
        edx = edx + 2u;
L_1010578a: ;
        eax = arg1 + 0x42u;
        ecx = 0xfu;
L_10105792: ;
        t14 = rd16(eax - 2u);
        wr16(eax, (uint16_t)t14);
        if (ecx != 1u)
        {
            eax = eax - 2u;
            ecx = ecx - 1u;
            edx = (edx & 0xffff0000u) | t14;
            goto L_10105792;
        }
        eax = eax - 2u;
        wr16(arg1 + 0x24u, rd16(arg1 + 0x22u));
    }
L_101057a6: ;
    eax = rd32(sp0 - 4u);
L_101057aa: ;
    return eax;
L_1010577d: ;
    if ((int32_t)ecx >= 16) goto L_1010578a;
    if ((int16_t)rd16(arg1 + ecx * 2u + 0x24u) >= 0) goto L_101057a6;
    goto L_1010578a;
L_101057af: ;
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, arg5);
    wr32(sp0 - 0x1cu, arg4);
    g->esp = sp0 - 0x10u;
    t12 = cow_cdecl(g, COW_IMG(0x101059c0u), 3, arg4, arg5, sp0 - 4u);
    wr16(arg1 + 0x44u, (uint16_t)t12);
    return 0u;
L_101057d7: ;
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, arg5);
    wr32(sp0 - 0x1cu, arg4);
    g->esp = sp0 - 0x10u;
    t11 = cow_cdecl(g, COW_IMG(0x10105b80u), 3, arg4, arg5, sp0 - 4u);
    wr16(arg1 + 0x46u, (uint16_t)t11);
    return 0u;
L_101057ff: ;
    wr32(sp0 - 0x14u, arg5);
    wr32(sp0 - 0x18u, arg1);
    g->esp = sp0 - 0x10u;
    t10 = cow_call_regs(g, COW_IMG(0x10105bd0u), arg5, arg1, g->edx, 1, 2, arg1, arg5);
    return t10;
L_10105816: ;
    wr32(sp0 - 0x14u, arg5);
    wr32(sp0 - 0x18u, arg1);
    g->esp = sp0 - 0x10u;
    t9 = cow_call_regs(g, COW_IMG(0x10105bd0u), arg1, arg2 & 0x1fu, g->edx, 1, 2, arg1, arg5);
    return t9;
L_1010582d: ;
    wr32(sp0 - 0x14u, arg5);
    wr32(sp0 - 0x18u, arg1);
    g->esp = sp0 - 0x10u;
    t8 = cow_call_regs(g, COW_IMG(0x10105de0u), 0u, arg5, g->edx, 1, 2, arg1, arg5);
    return t8;
L_10105844: ;
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, arg5);
    wr32(sp0 - 0x1cu, arg4);
    g->esp = sp0 - 0x10u;
    t7 = cow_cdecl(g, COW_IMG(0x10105a10u), 3, arg4, arg5, sp0 - 4u);
    wr16(arg1 + 0x48u, (uint16_t)t7);
    return 0u;
L_1010586c: ;
    if (arg3 != 1u) goto L_101058b5;
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, arg5);
    wr32(sp0 - 0x1cu, arg4);
    g->esp = sp0 - 0x10u;
    t2 = cow_call_regs(g, COW_IMG(0x10105ab0u), arg4, arg2 & 0x1fu, g->edx, 1, 3, arg4, arg5, sp0 - 4u);
    if ((int32_t)t2 >= 0)
    {
        ecx = t2;
        zf = t2 == 0u;
        goto L_101058ae;
    }
    t3 = rd32(arg1 + 0x60u);
    wr16(arg1 + 0x4au, rd16(arg1 + 0x4au));
    wr32(arg1 + 0x60u, t3 | 0xf800000u);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return arg5;
L_101058ae: ;
    if (zf)
    {
        ecx = rd32(arg1 + 0x64u);
    }
L_101058ca: ;
    if ((int32_t)ecx <= 0) goto L_101057a6;
    t5 = rd32(arg1 + 0x60u);
    wr16(arg1 + 0x4au, (uint16_t)(rd16(arg1 + 0x4au) | ecx));
    t6 = rd32(sp0 - 4u);
    wr32(arg1 + 0x60u, t5 | ecx);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return t6;
L_101058b5: ;
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, arg5);
    wr32(sp0 - 0x1cu, arg4);
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x10105a60u), 3, arg4, arg5, sp0 - 4u);
    ecx = t4;
    goto L_101058ca;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10105640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10105640(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
