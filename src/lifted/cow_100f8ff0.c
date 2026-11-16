/* f_0x100f8ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100f8ff0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_114;
    uint32_t loc_120;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 332u);

    wr32(sp0 - 0x124u, in_esi);
    wr32(sp0 - 0x128u, in_edi);
    edi = sp0 - 0x11cu;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x12cu, 0x18u);
    wr32(sp0 - 0x130u, arg3 + 0x1du);
    wr32(sp0 - 0x134u, sp0 - 0xfcu);
    g->ecx = sp0 - 0xfcu;
    g->esp = sp0 - 0x128u;
    cow_call_regs(g, COW_IMG(0x10312090u), arg3 + 0x1du, g->ecx, g->edx, 1, 3, sp0 - 0xfcu, arg3 + 0x1du, 0x18u);
    t1 = g->ecx;
    wr32(sp0 - 0x138u, sp0 - 0xfcu);
    g->edx = sp0 - 0xfcu;
    g->esp = sp0 - 0x134u;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x100e0a50u), t1, 1, sp0 - 0xfcu);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        edx = t4;
        goto L_100f919a;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    if (((eax & 0xffffff00u) | rd8(arg3 + 0x1au)) - 1u > 5u)
    {
        eax = ((eax & 0xffffff00u) | rd8(arg3 + 0x1au)) - 1u;
        goto L_100f919a;
    }
    eax = ((eax & 0xffffff00u) | rd8(arg3 + 0x1au)) - 1u;
    t5 = rd32(COW_IMG(0x100f91a8u) + eax * 4u);
    switch (t5 - RD)
    {
    case 0x100f904au: goto L_100f904a;
    case 0x100f9071u: goto L_100f9071;
    case 0x100f9092u: goto L_100f9092;
    case 0x100f9099u: goto L_100f9099;
    case 0x100f90bau: goto L_100f90ba;
    case 0x100f90dbu: goto L_100f90db;
    default: rt_fatal(g, COW_IMG(0x100f9043u), "switch");
    }
    return 0;
L_100f904a: ;
    if (rd8(arg3 + 0x1bu) == 2u)
    {
        loc_120 = (rd32(sp0 - 0x120u) & 0xffffff00u) | 0xfu;
    }
    else
    {
        loc_120 = (rd32(sp0 - 0x120u) & 0xffffff00u) | 0xfu;
    }
L_100f90f8: ;
    wr32(sp0 - 0x12cu, in_ebx);
    wr32(sp0 - 0x130u, sp0 - 0x11cu);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x12cu;
    t6 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x11cu);
    t7 = g->ecx;
    t8 = g->edx;
    g->esp = sp0 - 0x130u;
    cow_call_regs(g, COW_IMG(0x10093e30u), t6, t7, t8, 1, 0);
    t9 = rd16(arg3) >> 9u;
    wr32(sp0 - 0x134u, t9);
    wr32(sp0 - 0x138u, 0x30u);
    wr32(sp0 - 0x13cu, arg3 + 0x2cu);
    wr32(sp0 - 0x140u, 0xc8u);
    wr32(sp0 - 0x144u, sp0 - 0xc8u);
    g->esp = sp0 - 0x12cu;
    t10 = cow_cdecl(g, COW_IMG(0x100dde40u), 6, sp0 - 0xc8u, 0xc8u, arg3 + 0x2cu, 0x30u, t9, sp0 - 0x11cu);
    if (rd8(arg3 + 0x1bu) == 2u)
    {
        ebx = t10;
        ebp = in_ebp;
    }
    else
    {
        eax = rd8(arg3 + 0x1bu) - 2u;
        ebx = t10;
        if (rd8(arg3 + 0x1cu) <= 1u)
        {
            ebp = in_ebp;
        }
        else
        {
            wr32(sp0 - 0x130u, in_ebp);
            ebp = arg3 + 0xau;
            edi = 1u;
L_100f9145: ;
            wr32(sp0 - 0x134u, rd16(ebp));
            wr32(sp0 - 0x138u, edi);
            wr32(sp0 - 0x13cu, COW_IMG(0x10362320u));
            t11 = ebx + sp0 - 0xc8u;
            wr32(sp0 - 0x140u, t11);
            g->ebx = ebx;
            g->esp = sp0 - 0x12cu;
            t12 = cow_cdecl(g, COW_IMG(0x10312031u), 5, t11, COW_IMG(0x10362320u), edi, rd16(ebp), in_ebp);
            if (edi + 1u < rd8(arg3 + 0x1cu))
            {
                ebx = ebx + t12;
                ebp = ebp + 2u;
                edi = edi + 1u;
                goto L_100f9145;
            }
            ebx = ebx + t12;
            ebp = rd32(sp0 - 0x130u);
        }
    }
    wr32(sp0 - 0x130u, sp0 - 0xc8u);
    wr32(sp0 - 0x134u, COW_IMG(0x1034f7e0u));
    wr32(sp0 - 0x138u, 0u);
    wr32(sp0 - 0x13cu, 0u);
    wr32(sp0 - 0x140u, 0u);
    wr32(sp0 - 0x144u, 0u);
    t13 = rd32(sp0 - 0x120u);
    wr32(sp0 - 0x148u, t13);
    g->ebx = ebx;
    g->edx = t13;
    g->esp = sp0 - 0x12cu;
    t14 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, t13, 0u, 0u, 0u, 0u, COW_IMG(0x1034f7e0u), sp0 - 0xc8u);
    t15 = g->edx;
    g->ebx = rd32(sp0 - 0x12cu);
    g->esi = rd32(sp0 - 0x124u);
    g->edi = rd32(sp0 - 0x128u);
    g->ebp = ebp;
    g->edx = t15;
    return (t14 & 0xffffff00u) | 1u;
L_100f9071: ;
    if (rd8(arg3 + 0x1bu) == 2u)
    {
        loc_120 = (rd32(sp0 - 0x120u) & 0xffffff00u) | 0x10u;
    }
    else
    {
        loc_120 = (rd32(sp0 - 0x120u) & 0xffffff00u) | 0x10u;
    }
    goto L_100f90f8;
L_100f9092: ;
    loc_120 = (rd32(sp0 - 0x120u) & 0xffffff00u) | 0x1cu;
L_100f909e: ;
    goto L_100f90f8;
L_100f9099: ;
    loc_120 = (rd32(sp0 - 0x120u) & 0xffffff00u) | 0x1fu;
    goto L_100f909e;
L_100f90ba: ;
    if (rd8(arg3 + 0x1bu) == 2u)
    {
        loc_120 = (rd32(sp0 - 0x120u) & 0xffffff00u) | 0xdu;
    }
    else
    {
        loc_120 = (rd32(sp0 - 0x120u) & 0xffffff00u) | 0xdu;
    }
    goto L_100f90f8;
L_100f90db: ;
    if (rd8(arg3 + 0x1bu) != 2u)
    {
        loc_120 = (rd32(sp0 - 0x120u) & 0xffffff00u) | 0xeu;
    }
    else
    {
        loc_120 = (rd32(sp0 - 0x120u) & 0xffffff00u) | 0xeu;
        loc_114 = (rd32(sp0 - 0x114u) & 0xffff0000u) | 0x95u;
    }
    goto L_100f90f8;
L_100f919a: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f8ff0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f8ff0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
