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
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    t1 = cow_call_regs(g, COW_IMG(0x10312090u), arg3 + 0x1du, g->ecx, g->edx, 1, 3, sp0 - 0xfcu, arg3 + 0x1du, 0x18u);
    t2 = g->ecx;
    wr8(sp0 - 0xedu, 0u);
    wr32(sp0 - 0x138u, sp0 - 0xfcu);
    g->edx = sp0 - 0xfcu;
    g->esp = sp0 - 0x134u;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x100e0a50u), t2, 1, sp0 - 0xfcu);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        edx = t5;
        goto L_100f919a;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    if (((eax & 0xffffff00u) | rd8(arg3 + 0x1au)) - 1u > 5u)
    {
        eax = ((eax & 0xffffff00u) | rd8(arg3 + 0x1au)) - 1u;
        goto L_100f919a;
    }
    eax = ((eax & 0xffffff00u) | rd8(arg3 + 0x1au)) - 1u;
    t6 = rd32(COW_IMG(0x100f91a8u) + eax * 4u);
    switch (t6 - RD)
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
    wr8(sp0 - 0x120u, 0xfu);
    if (rd8(arg3 + 0x1bu) == 2u)
    {
        wr16(sp0 - 0x114u, 0x98u);
    }
    else
    {
        wr16(sp0 - 0x114u, 0x97u);
    }
L_100f90f8: ;
    wr32(sp0 - 0x12cu, in_ebx);
    wr32(sp0 - 0x130u, sp0 - 0x11cu);
    g->eax = sp0 - 0x11cu;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x12cu;
    t8 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x11cu);
    t9 = g->ecx;
    t10 = g->edx;
    g->esp = sp0 - 0x130u;
    cow_call_regs(g, COW_IMG(0x10093e30u), t8, t9, t10, 1, 0);
    t11 = rd16(arg3) >> 9u;
    wr32(sp0 - 0x134u, t11);
    wr32(sp0 - 0x138u, 0x30u);
    wr32(sp0 - 0x13cu, arg3 + 0x2cu);
    wr32(sp0 - 0x140u, 0xc8u);
    wr32(sp0 - 0x144u, sp0 - 0xc8u);
    g->eax = sp0 - 0xc8u;
    g->esp = sp0 - 0x12cu;
    t12 = cow_cdecl(g, COW_IMG(0x100dde40u), 6, sp0 - 0xc8u, 0xc8u, arg3 + 0x2cu, 0x30u, t11, sp0 - 0x11cu);
    if (rd8(arg3 + 0x1bu) == 2u)
    {
        eax = rd8(arg3 + 0x1bu) - 2u;
        ebx = t12;
        ebp = in_ebp;
    }
    else
    {
        eax = rd8(arg3 + 0x1bu) - 2u;
        ebx = t12;
        if (rd8(arg3 + 0x1cu) <= 1u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg3 + 0x1cu);
            ebp = in_ebp;
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(arg3 + 0x1cu);
            wr32(sp0 - 0x130u, in_ebp);
            ebp = arg3 + 0xau;
            edi = 1u;
L_100f9145: ;
            wr32(sp0 - 0x134u, rd16(ebp));
            wr32(sp0 - 0x138u, edi);
            wr32(sp0 - 0x13cu, COW_IMG(0x10362320u));
            t13 = ebx + sp0 - 0xc8u;
            wr32(sp0 - 0x140u, t13);
            g->ebx = ebx;
            g->eax = eax;
            g->esp = sp0 - 0x12cu;
            t14 = cow_cdecl(g, COW_IMG(0x10312031u), 5, t13, COW_IMG(0x10362320u), edi, rd16(ebp), in_ebp);
            if (edi + 1u < rd8(arg3 + 0x1cu))
            {
                eax = rd8(arg3 + 0x1cu);
                ebx = ebx + t14;
                ebp = ebp + 2u;
                edi = edi + 1u;
                goto L_100f9145;
            }
            eax = rd8(arg3 + 0x1cu);
            ebx = ebx + t14;
            ebp = rd32(sp0 - 0x130u);
        }
    }
    wr32(sp0 - 0x130u, sp0 - 0xc8u);
    wr32(sp0 - 0x134u, COW_IMG(0x1034f7e0u));
    wr32(sp0 - 0x138u, 0u);
    wr32(sp0 - 0x13cu, 0u);
    wr32(sp0 - 0x140u, 0u);
    wr32(sp0 - 0x144u, 0u);
    t15 = rd32(sp0 - 0x120u);
    wr32(sp0 - 0x148u, t15);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = t15;
    g->esp = sp0 - 0x12cu;
    t16 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, t15, 0u, 0u, 0u, 0u, COW_IMG(0x1034f7e0u), sp0 - 0xc8u);
    t17 = g->edx;
    g->ebx = rd32(sp0 - 0x12cu);
    g->esi = rd32(sp0 - 0x124u);
    g->edi = rd32(sp0 - 0x128u);
    g->ebp = ebp;
    g->edx = t17;
    return (t16 & 0xffffff00u) | 1u;
L_100f9071: ;
    wr8(sp0 - 0x120u, 0x10u);
    if (rd8(arg3 + 0x1bu) == 2u)
    {
        wr16(sp0 - 0x114u, 0x9au);
    }
    else
    {
        wr16(sp0 - 0x114u, 0x99u);
    }
    goto L_100f90f8;
L_100f9092: ;
    wr8(sp0 - 0x120u, 0x1cu);
L_100f909e: ;
    if (rd8(arg3 + 0x1bu) == 2u)
    {
        wr16(sp0 - 0x114u, 0x123u);
    }
    else
    {
        wr16(sp0 - 0x114u, 0x122u);
    }
    goto L_100f90f8;
L_100f9099: ;
    wr8(sp0 - 0x120u, 0x1fu);
    goto L_100f909e;
L_100f90ba: ;
    wr8(sp0 - 0x120u, 0xdu);
    if (rd8(arg3 + 0x1bu) == 2u)
    {
        wr16(sp0 - 0x114u, 0x94u);
    }
    else
    {
        wr16(sp0 - 0x114u, 0x93u);
    }
    goto L_100f90f8;
L_100f90db: ;
    wr8(sp0 - 0x120u, 0xeu);
    t7 = rd8(arg3 + 0x1bu);
    wr16(sp0 - 0x114u, 0x95u);
    if (t7 == 2u)
    {
        wr16(sp0 - 0x114u, 0x96u);
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
