/* f_0x10287ae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10287ae0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 628u);

    wr32(sp0 - 0x244u, in_ebx);
    wr32(sp0 - 0x248u, in_ebp);
    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        wr32(sp0 - 0x24cu, arg2);
        wr32(sp0 - 0x250u, arg5);
        g->esp = sp0 - 0x244u;
        t1 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, in_edx, 1, 3, arg5, arg2, in_ebp);
        t2 = g->edx;
        wr32(sp0 - 0x250u, t1);
        wr32(sp0 - 0x254u, COW_IMG(0x103b8944u));
        wr32(sp0 - 0x258u, rd32(COW_IMG(0x109a2788u)));
        g->ecx = rd32(COW_IMG(0x109a2788u));
        t3 = rd32(COW_IMG(0x109a2788u));
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t2, 1, 5, t3, COW_IMG(0x103b8944u), t1, arg2, in_ebp);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    wr32(sp0 - 0x24cu, 0u);
    wr32(sp0 - 0x250u, 0u);
    wr32(sp0 - 0x254u, 0u);
    g->esp = sp0 - 0x248u;
    cow_thiscall_cdecl(g, COW_IMG(0x1027a310u), ecx, 3, 0u, 0u, 0u);
    t6 = g->ecx;
    wr32(sp0 - 0x258u, arg2);
    wr32(sp0 - 0x25cu, arg1);
    wr32(sp0 - 0x260u, sp0 - 0x200u);
    g->edx = arg1;
    g->esp = sp0 - 0x254u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x1027a310u), t6, 3, sp0 - 0x200u, arg1, arg2);
    t8 = g->edx;
    wr32(sp0 - 0x264u, COW_IMG(0x1036bf68u));
    wr32(sp0 - 0x268u, sp0 - 0x200u);
    g->esp = sp0 - 0x260u;
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), sp0 - 0x200u, 2, sp0 - 0x200u, COW_IMG(0x1036bf68u));
    t10 = g->ecx;
    if (t9 != 0u)
    {
        ecx = t10;
        ebx = t9;
        goto L_10287b5f;
    }
    eax = t9;
    g->ebx = rd32(sp0 - 0x244u);
    g->ebp = rd32(sp0 - 0x248u);
    return eax & 0xffffff00u;
L_10287b5f: ;
    wr32(sp0 - 0x24cu, in_esi);
    wr32(sp0 - 0x250u, in_edi);
    esi = 0u;
    edi = 0u;
L_10287b65: ;
    wr32(sp0 - 0x254u, 0x6a4u);
    wr32(sp0 - 0x258u, COW_IMG(0x103b7ea0u));
    wr32(sp0 - 0x25cu, esi + 0x800u);
    wr32(sp0 - 0x260u, edi);
    g->edx = esi + 0x800u;
    g->esp = sp0 - 0x23cu;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), ecx, 9, edi, esi + 0x800u, COW_IMG(0x103b7ea0u), 0x6a4u, in_edi, in_esi, rd32(sp0 - 0x248u), rd32(sp0 - 0x244u), rd32(sp0 - 0x240u));
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0x264u, ebx);
    wr32(sp0 - 0x268u, 0x800u);
    wr32(sp0 - 0x26cu, 1u);
    wr32(sp0 - 0x270u, esi + t11);
    g->ecx = t12;
    g->esp = sp0 - 0x258u;
    t14 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, t13, 1, 6, esi + t11, 1u, 0x800u, ebx, rd32(sp0 - 0x260u), rd32(sp0 - 0x25cu));
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 == 0x800u)
    {
        ecx = t15;
        esi = esi + t14;
        edi = t11;
        goto L_10287b65;
    }
    ecx = t15;
    edx = t16;
    esi = esi + t14;
    edi = t11;
    wr32(sp0 - 0x254u, ebx);
    g->edi = edi;
    g->ecx = ecx;
    g->esp = sp0 - 0x248u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, ebx, rd32(sp0 - 0x250u), rd32(sp0 - 0x24cu));
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x258u, arg5);
    g->esp = sp0 - 0x24cu;
    cow_call_regs(g, COW_IMG(0x10285f20u), g->eax, g->ecx, t18, 1, 3, arg5, rd32(sp0 - 0x254u), rd32(sp0 - 0x250u));
    wr32(sp0 - 0x25cu, arg2);
    wr32(sp0 - 0x260u, COW_IMG(0x103b893cu));
    wr32(sp0 - 0x264u, sp0 - 0x238u);
    wr32(sp0 - 0x240u, arg3);
    wr32(sp0 - 0x23cu, esi);
    g->ebx = arg5;
    g->ecx = arg3;
    g->edx = sp0 - 0x238u;
    g->esp = sp0 - 0x250u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x238u, COW_IMG(0x103b893cu), arg2, arg5, rd32(sp0 - 0x254u));
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0x204u, 0x3f800000u);
    wr32(sp0 - 0x224u, 0x3f800000u);
    if (arg4 == 0u)
    {
        ecx = t19;
        edx = t20;
        wr32(sp0 - 0x230u, 0u);
        wr32(sp0 - 0x22cu, 0u);
        wr32(sp0 - 0x228u, 0u);
        wr32(sp0 - 0x220u, 0u);
        wr32(sp0 - 0x21cu, 0u);
        wr32(sp0 - 0x218u, 0u);
        wr32(sp0 - 0x214u, 0x3f800000u);
        wr32(sp0 - 0x210u, 0u);
        wr32(sp0 - 0x20cu, 0u);
        wr32(sp0 - 0x208u, 0u);
        eax = arg4;
    }
    else
    {
        t21 = rd32(arg4 + 0x5cu);
        wr32(sp0 - 0x230u, t21);
        t22 = rd32(arg4 + 0x60u);
        wr32(sp0 - 0x22cu, t22);
        t23 = rd32(arg4 + 0x64u);
        wr32(sp0 - 0x228u, t23);
        t24 = rd32(arg4 + 0x68u);
        wr32(sp0 - 0x220u, t24);
        t25 = rd32(arg4 + 0x6cu);
        wr32(sp0 - 0x21cu, t25);
        t26 = rd32(arg4 + 0x70u);
        wr32(sp0 - 0x218u, t26);
        t27 = rd32(arg4 + 0x74u);
        wr32(sp0 - 0x214u, t27);
        t28 = rd32(arg4 + 0x78u);
        wr32(sp0 - 0x210u, t28);
        t29 = rd32(arg4 + 0x7cu);
        wr32(sp0 - 0x20cu, t29);
        t30 = rd32(arg4 + 0x80u);
        wr32(sp0 - 0x208u, t30);
        t31 = (arg3 & 0xffffff00u) | (uint8_t)(arg3 | 1u);
        wr32(sp0 - 0x240u, t31);
        eax = t31;
        ecx = t29;
        edx = t30;
    }
    wr32(sp0 - 0x254u, esi);
    wr32(sp0 - 0x258u, arg2);
    wr32(sp0 - 0x25cu, COW_IMG(0x103b8920u));
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x254u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b8920u), arg2);
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 - 0x260u, arg5);
    wr32(sp0 - 0x264u, sp0 - 0x240u);
    g->ebx = arg5;
    g->ecx = t32;
    g->edx = t33;
    g->esp = sp0 - 0x25cu;
    cow_cdecl(g, COW_IMG(0x10287d00u), 2, sp0 - 0x240u, arg5);
    t34 = g->ecx;
    t35 = g->edx;
    if ((int32_t)esi <= 0)
    {
        ecx = t34;
        edx = t35;
        goto L_10287cdd;
    }
    ebx = 0u;
L_10287cb0: ;
    if ((int32_t)(esi - ebx) < 2048)
    {
        eax = esi - ebx;
    }
    else
    {
        eax = 0x800u;
    }
    wr32(sp0 - 0x254u, arg5);
    wr32(sp0 - 0x258u, eax);
    wr32(sp0 - 0x25cu, 1u);
    wr32(sp0 - 0x260u, ebx + edi);
    g->ecx = arg5;
    g->esp = sp0 - 0x248u;
    t36 = cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, ebx + edi, 1, 6, ebx + edi, 1u, eax, arg5, rd32(sp0 - 0x250u), rd32(sp0 - 0x24cu));
    t37 = g->ecx;
    t38 = g->edx;
    if ((int32_t)(ebx + t36) < (int32_t)esi)
    {
        ebx = ebx + t36;
        goto L_10287cb0;
    }
    ecx = t37;
    edx = t38;
L_10287cdd: ;
    wr32(sp0 - 0x254u, 0x6e8u);
    wr32(sp0 - 0x258u, COW_IMG(0x103b7ea0u));
    wr32(sp0 - 0x25cu, edi);
    g->esp = sp0 - 0x250u;
    t39 = cow_cdecl(g, COW_IMG(0x10276110u), 3, edi, COW_IMG(0x103b7ea0u), 0x6e8u);
    g->ebx = rd32(sp0 - 0x244u);
    g->esi = rd32(sp0 - 0x24cu);
    g->edi = rd32(sp0 - 0x250u);
    g->ebp = rd32(sp0 - 0x248u);
    return (t39 & 0xffffff00u) | (uint8_t)(t39 | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10287ae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10287ae0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
