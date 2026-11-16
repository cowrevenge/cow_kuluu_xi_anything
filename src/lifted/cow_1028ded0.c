/* f_0x1028ded0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_1028ded0(Guest* g)
{
    double d12;
    double d18;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_e8;
    uint32_t loc_ec;
    uint32_t loc_f0;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    const double xin0 = ST(0);
    const double xin1 = ST(1);
    const double xin2 = ST(2);
    const double xin3 = ST(3);
    cow_frame(g, sp0, 328u);

    wr32(sp0 - 0xf4u, in_ebx);
    wr32(sp0 - 0xf8u, in_ebp);
    wr32(sp0 - 0xfcu, in_esi);
    wr32(sp0 - 0x100u, in_edi);
    if (rd32(arg3 + 0x34u) != 0u)
    {
        eax = rd32(arg3 + 0x34u);
        ecx = rd32(arg2 + 0x34u);
        t1 = rd32(eax + 0x54u);
        wr32(sp0 - 0xe8u, t1);
        edx = t1;
        loc_e8 = t1;
    }
    else
    {
        eax = rd32(arg3 + 0x34u);
        ecx = rd32(arg2 + 0x34u);
        wr32(sp0 - 0xe8u, 0u);
        edx = in_edx;
        loc_e8 = 0u;
    }
    if (ecx != 0u)
    {
        t2 = rd32(ecx + 0x54u);
        wr32(sp0 - 0xf0u, t2);
        edx = t2;
        loc_f0 = t2;
    }
    else
    {
        wr32(sp0 - 0xf0u, 0u);
        loc_f0 = 0u;
    }
    if (eax != 0u)
    {
        ebp = rd32(eax + 0x58u);
    }
    else
    {
        ebp = 0u;
    }
    if (ecx != 0u)
    {
        ebx = rd32(ecx + 0x58u);
    }
    else
    {
        ebx = 0u;
    }
    wr32(sp0 - 0x104u, arg6);
    wr32(sp0 - 0x108u, sp0 - 0xc0u);
    g->eax = sp0 - 0xc0u;
    fpush(g, xin0);
    fpush(g, xin1);
    fpush(g, xin2);
    fpush(g, xin3);
    g->esp = sp0 - 0x30u;
    t3 = cow_bridge_indirect(g, COW_IMG(0x1027f100u), 0u, 54u, (const uint32_t[]){sp0 - 0xc0u, arg6, in_edi, in_esi, in_ebp, in_ebx, loc_f0, rd32(sp0 - 0xecu), loc_e8, rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u)}, g->ecx, g->edx, g->eax, 216u);
    wr32(sp0 - 0x10cu, sp0 - 0xc0u);
    wr32(sp0 - 0x110u, sp0 - 0x80u);
    g->ecx = sp0 - 0xc0u;
    g->edx = sp0 - 0x80u;
    g->esp = sp0 - 0x108u;
    cow_cdecl(g, COW_IMG(0x1027f090u), 2, sp0 - 0x80u, sp0 - 0xc0u);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x114u, arg6);
    wr32(sp0 - 0x118u, sp0 - 0x40u);
    g->esp = sp0 - 0x110u;
    cow_cdecl(g, COW_IMG(0x1027f090u), 2, sp0 - 0x40u, arg6);
    if ((int32_t)arg1 > 0)
    {
        wr32(sp0 - 0xecu, arg1);
        esi = arg5;
        loc_ec = arg1;
L_1028df7a: ;
        t6 = rd32(esi) * 0xcu + rd32(sp0 - 0xe8u);
        wr32(sp0 - 0x104u, t6);
        wr32(sp0 - 0x108u, arg6);
        wr32(sp0 - 0x10cu, sp0 - 0xccu);
        g->esp = sp0 - 0x100u;
        cow_cdecl(g, COW_IMG(0x1027ef40u), 3, sp0 - 0xccu, arg6, t6);
        wr32(sp0 - 0x110u, sp0 - 0xccu);
        t7 = rd32(sp0 - 0xf0u) + rd32(arg4 + esi - arg5) * 0xcu;
        wr32(sp0 - 0x114u, t7);
        g->esp = sp0 - 0x10cu;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t7, sp0 - 0xccu);
        t8 = ebp + rd32(esi) * 0xcu;
        wr32(sp0 - 0x118u, t8);
        wr32(sp0 - 0x11cu, sp0 - 0x80u);
        wr32(sp0 - 0x120u, sp0 - 0xd8u);
        g->esp = sp0 - 0x114u;
        cow_cdecl(g, COW_IMG(0x1027ef40u), 3, sp0 - 0xd8u, sp0 - 0x80u, t8);
        t9 = ebx + rd32(arg4 + esi - arg5) * 0xcu;
        wr32(sp0 - 0x124u, t9);
        wr32(sp0 - 0x128u, sp0 - 0xd8u);
        wr32(sp0 - 0x12cu, sp0 - 0xe4u);
        g->ecx = sp0 - 0xd8u;
        g->edx = sp0 - 0xe4u;
        g->esp = sp0 - 0x120u;
        cow_cdecl(g, COW_IMG(0x10274980u), 3, sp0 - 0xe4u, sp0 - 0xd8u, t9);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(sp0 - 0x130u, sp0 - 0xe4u);
        g->esp = sp0 - 0x12cu;
        cow_cdecl(g, COW_IMG(0x10274910u), 1, sp0 - 0xe4u);
        d12 = cow_take_float(g);
        wr32(sp0 - 0x134u, sp0 - 0xe4u);
        t13 = ebx + rd32(arg4 + esi - arg5) * 0xcu;
        wr32(sp0 - 0x138u, t13);
        g->esp = sp0 - 0x130u;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t13, sp0 - 0xe4u);
        t14 = ebx + rd32(arg4 + esi - arg5) * 0xcu;
        wr32(sp0 - 0x13cu, t14);
        wr32(sp0 - 0x140u, sp0 - 0x40u);
        wr32(sp0 - 0x144u, sp0 - 0xd8u);
        g->esp = sp0 - 0x138u;
        cow_cdecl(g, COW_IMG(0x1027ef40u), 3, sp0 - 0xd8u, sp0 - 0x40u, t14);
        t15 = ebp + rd32(esi) * 0xcu;
        wr32(sp0 - 0x104u, t15);
        wr32(sp0 - 0x108u, sp0 - 0xd8u);
        wr32(sp0 - 0x10cu, sp0 - 0xe4u);
        g->ecx = sp0 - 0xd8u;
        g->edx = sp0 - 0xe4u;
        g->esp = sp0 - 0x100u;
        cow_cdecl(g, COW_IMG(0x10274980u), 3, sp0 - 0xe4u, sp0 - 0xd8u, t15);
        t16 = g->ecx;
        t17 = g->edx;
        wr32(sp0 - 0x110u, sp0 - 0xe4u);
        g->esp = sp0 - 0x10cu;
        cow_cdecl(g, COW_IMG(0x10274910u), 1, sp0 - 0xe4u);
        d18 = cow_take_float(g);
        wr32(sp0 - 0x114u, sp0 - 0xe4u);
        t19 = ebp + rd32(esi) * 0xcu;
        wr32(sp0 - 0x118u, t19);
        g->esp = sp0 - 0x110u;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t19, sp0 - 0xe4u);
        t20 = rd32(sp0 - 0xecu) - 1u;
        wr32(sp0 - 0xecu, t20);
        if (rd32(sp0 - 0xecu) != 1u)
        {
            esi = esi + 4u;
            loc_ec = t20;
            goto L_1028df7a;
        }
    }
    g->ebx = rd32(sp0 - 0xf4u);
    g->esi = rd32(sp0 - 0xfcu);
    g->edi = rd32(sp0 - 0x100u);
    g->ebp = rd32(sp0 - 0xf8u);
    g->top = (g->top + 4u) & 7u;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028ded0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028ded0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
