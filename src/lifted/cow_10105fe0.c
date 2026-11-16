/* f_0x10105fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=10 */
uint32_t cow_fn_10105fe0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_404;
    uint32_t loc_728;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 1988u);

    wr32(sp0 - 0x794u, in_ebx);
    wr32(sp0 - 0x798u, in_ebp);
    wr32(sp0 - 0x79cu, in_esi);
    wr32(sp0 - 0x7a0u, in_edi);
    wr32(sp0 - 0x7a4u, arg6);
    wr32(sp0 - 0x7a8u, arg5);
    wr32(sp0 - 0x7acu, arg4);
    wr32(sp0 - 0x7b0u, arg3);
    wr32(sp0 - 0x7b4u, arg1);
    wr32(sp0 - 0x7b8u, sp0 - 0x790u);
    g->edx = sp0 - 0x790u;
    g->esp = sp0 - 0x79cu;
    cow_thiscall_cdecl(g, COW_IMG(0x10104f00u), arg1, 7, sp0 - 0x790u, arg1, arg3, arg4, arg5, arg6, in_edi);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(sp0 - 0x7bcu, arg2);
    wr32(sp0 - 0x7c0u, sp0 - 0x790u);
    g->eax = sp0 - 0x790u;
    g->edx = t2;
    g->esp = sp0 - 0x7b8u;
    t3 = cow_cdecl(g, COW_IMG(0x101041e0u), 2, sp0 - 0x790u, arg2);
    t4 = g->edx;
    if ((rd8(sp0 - 0x742u) & 4u) == 0u)
    {
        edx = t4;
        ebx = t3;
        ebp = arg2 + t3;
    }
    else
    {
        eax = (t3 & 0xffffff00u) | rd8(sp0 - 0x742u);
        ebx = t3;
        ebp = arg2 + t3;
        wr32(sp0 - 0x7a4u, 0xc8u);
        wr32(sp0 - 0x7a8u, sp0 - 0x724u);
        wr32(sp0 - 0x7acu, arg8);
        g->eax = eax;
        g->edx = arg8;
        g->esp = sp0 - 0x7a0u;
        t5 = cow_thiscall_cdecl(g, arg9, sp0 - 0x724u, 3, arg8, sp0 - 0x724u, 0xc8u);
        t6 = g->edx;
        if ((uint16_t)t5 <= 0xc8u)
        {
            eax = t5;
            edx = t6;
            loc_728 = (rd32(sp0 - 0x728u) & 0xffff0000u) | (uint16_t)t5;
        }
        else
        {
            eax = t5;
            edx = t6;
            loc_728 = (rd32(sp0 - 0x728u) & 0xffff0000u) | (uint16_t)t5;
            eax = (eax & 0xffff0000u) | 0xc8u;
            loc_728 = (loc_728 & 0xffff0000u) | 0xc8u;
        }
        wr16(ebp, (uint16_t)eax);
        if ((uint16_t)loc_728 == 0u)
        {
            ebx = ebx + 2u;
            ebp = ebp + 2u;
        }
        else
        {
            ebx = ebx + 2u;
            ebp = ebp + 2u;
            t7 = (uint16_t)loc_728 << 2u;
            esi = sp0 - 0x724u;
            edi = ebp;
            ecx = t7 >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = t7 & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            edx = t7;
            ebx = ebx + t7;
            ebp = ebp + t7;
        }
    }
    if ((rd8(sp0 - 0x742u) & 8u) == 0u) goto L_10106153;
    wr32(sp0 - 0x7a4u, 0x40u);
    wr32(sp0 - 0x7a8u, sp0 - 0x400u);
    wr32(sp0 - 0x7acu, arg8);
    g->eax = sp0 - 0x400u;
    g->esp = sp0 - 0x7a0u;
    t8 = cow_thiscall_cdecl(g, arg10, arg8, 3, arg8, sp0 - 0x400u, 0x40u);
    if ((uint16_t)t8 <= 0x40u)
    {
        eax = t8;
        loc_404 = (rd32(sp0 - 0x404u) & 0xffff0000u) | (uint16_t)t8;
    }
    else
    {
        eax = t8;
        loc_404 = (rd32(sp0 - 0x404u) & 0xffff0000u) | (uint16_t)t8;
        eax = (eax & 0xffff0000u) | 0x40u;
        loc_404 = (loc_404 & 0xffff0000u) | 0x40u;
    }
    wr16(ebp, (uint16_t)eax);
    if ((uint16_t)loc_404 == 0u)
    {
        ebx = ebx + 2u;
        goto L_10106137;
    }
    ebx = ebx + 2u;
    t9 = (uint16_t)loc_404 << 4u;
    esi = sp0 - 0x400u;
    edi = ebp + 2u;
    ecx = t9 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t9 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t10 = rd32(sp0 - 0x7a0u);
    wr16(arg7, rd16(sp0 - 0x742u));
    g->ebx = rd32(sp0 - 0x794u);
    g->esi = rd32(sp0 - 0x79cu);
    g->edi = t10;
    g->ebp = rd32(sp0 - 0x798u);
    return ebx + t9;
L_10106137: ;
    t11 = rd32(sp0 - 0x79cu);
    t12 = rd32(sp0 - 0x7a0u);
    wr16(arg7, rd16(sp0 - 0x742u));
    g->ebx = rd32(sp0 - 0x794u);
    g->esi = t11;
    g->edi = t12;
    g->ebp = rd32(sp0 - 0x798u);
    return ebx;
L_10106153: ;
    wr16(arg7, rd16(sp0 - 0x742u));
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10105fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10105fe0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
