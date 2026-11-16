/* f_0x1010ad90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_1010ad90(Guest* g)
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
    uint32_t t3;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd32(self + 0x18u) == 0u) goto L_1010ae77;
    eax = rd32(self + 0x18u);
    if (eax != 1u)
    {
        eax = eax - 1u;
        ebx = in_ebx & 0xffffff00u;
        goto L_1010af7e;
    }
    if (rd32(self + 0x24u) == 0u)
    {
        ecx = self;
        goto L_1010adbf;
    }
    eax = rd32(self + 0x24u);
    if (rd32(eax + 4u) == 0u)
    {
        ecx = rd32(eax + 4u);
        goto L_1010adbf;
    }
    ecx = rd32(eax + 4u);
    eax = ecx;
L_1010adc4: ;
    wr32(sp0 - 0x18u, eax);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
    t2 = g->ecx;
    t3 = g->edx;
    if (arg1 == 0u)
    {
        esi = t1;
        eax = 0u;
    }
    else
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        if (rd32(arg1 + 4u) == 0u) goto L_1010adf2;
        eax = rd32(arg1 + 4u);
        if (rd32(eax + 4u) == 0u)
        {
            ecx = rd32(eax + 4u);
            goto L_1010adf2;
        }
        ecx = rd32(eax + 4u);
        wr32(sp0 - 0x18u, ecx);
        g->eax = ecx;
        g->esp = sp0 - 0x14u;
        t4 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, ecx);
        eax = t4;
    }
L_1010ae04: ;
    if (rd32(self + 0x1cu) > 5u)
    {
        ebx = in_ebx & 0xffffff00u;
        goto L_1010af7e;
    }
    edi = rd32(self + 0x1cu);
    t6 = rd32(COW_IMG(0x1010af8cu) + edi * 4u);
    switch (t6 - RD)
    {
    case 0x1010ae17u: goto L_1010ae17;
    case 0x1010ae27u: goto L_1010ae27;
    case 0x1010ae37u: goto L_1010ae37;
    case 0x1010ae47u: goto L_1010ae47;
    case 0x1010ae57u: goto L_1010ae57;
    case 0x1010ae67u: goto L_1010ae67;
    default: rt_fatal(g, COW_IMG(0x1010ae10u), "switch");
    }
    return 0;
L_1010adbf: ;
    eax = COW_IMG(0x103d3c84u);
    goto L_1010adc4;
L_1010adf2: ;
    wr32(sp0 - 0x18u, COW_IMG(0x103d3c84u));
    g->eax = COW_IMG(0x103d3c84u);
    g->esp = sp0 - 0x14u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, COW_IMG(0x103d3c84u));
    eax = t5;
    goto L_1010ae04;
L_1010ae17: ;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return (eax & 0xffffff00u) | esi == eax;
L_1010ae27: ;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return (eax & 0xffffff00u) | esi != eax;
L_1010ae37: ;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return (eax & 0xffffff00u) | (int32_t)esi > (int32_t)eax;
L_1010ae47: ;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return (eax & 0xffffff00u) | (int32_t)esi >= (int32_t)eax;
L_1010ae57: ;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return (eax & 0xffffff00u) | (int32_t)esi < (int32_t)eax;
L_1010ae67: ;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return (eax & 0xffffff00u) | (int32_t)esi <= (int32_t)eax;
L_1010ae77: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 8u, 0);
    t7 = g->edx;
    if (arg1 == 0u)
    {
        edx = t7;
    }
    else
    {
        edx = t7;
        wr32(sp0 - 0x18u, arg1);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x10109260u), sp0 - 8u, 1, arg1);
        t8 = g->edx;
        edx = t8;
    }
    if (rd32(self + 0x1cu) > 5u)
    {
        eax = rd32(self + 0x1cu);
        ebx = in_ebx & 0xffffff00u;
        goto L_1010af75;
    }
    eax = rd32(self + 0x1cu);
    t9 = rd32(COW_IMG(0x1010afa4u) + eax * 4u);
    switch (t9 - RD)
    {
    case 0x1010aea5u: goto L_1010aea5;
    case 0x1010aecbu: goto L_1010aecb;
    case 0x1010aef1u: goto L_1010aef1;
    case 0x1010af17u: goto L_1010af17;
    case 0x1010af3du: goto L_1010af3d;
    case 0x1010af63u: goto L_1010af63;
    default: rt_fatal(g, COW_IMG(0x1010ae9eu), "switch");
    }
    return 0;
L_1010aea5: ;
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->ebx = in_ebx & 0xffffff00u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t24 = cow_thiscall(g, COW_IMG(0x101095d0u), self + 0x20u, 1, sp0 - 8u);
    t25 = g->edx;
    t26 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 8u, 0);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return (t26 & 0xffffff00u) | t24 == 0u;
L_1010aecb: ;
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->ebx = in_ebx & 0xffffff00u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t21 = cow_thiscall(g, COW_IMG(0x101095d0u), self + 0x20u, 1, sp0 - 8u);
    t22 = g->edx;
    t23 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 8u, 0);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return (t23 & 0xffffff00u) | t21 != 0u;
L_1010aef1: ;
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->ebx = in_ebx & 0xffffff00u;
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x14u;
    t18 = cow_thiscall(g, COW_IMG(0x101095d0u), self + 0x20u, 1, sp0 - 8u);
    t19 = g->edx;
    t20 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 8u, 0);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return (t20 & 0xffffff00u) | (int32_t)t18 > 0;
L_1010af17: ;
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->ebx = in_ebx & 0xffffff00u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t15 = cow_thiscall(g, COW_IMG(0x101095d0u), self + 0x20u, 1, sp0 - 8u);
    t16 = g->edx;
    t17 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 8u, 0);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return (t17 & 0xffffff00u) | (int32_t)t15 >= 0;
L_1010af3d: ;
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->ebx = in_ebx & 0xffffff00u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t12 = cow_thiscall(g, COW_IMG(0x101095d0u), self + 0x20u, 1, sp0 - 8u);
    t13 = g->edx;
    t14 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 8u, 0);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return (t14 & 0xffffff00u) | (int32_t)t12 < 0;
L_1010af63: ;
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->ebx = in_ebx & 0xffffff00u;
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x14u;
    t10 = cow_thiscall(g, COW_IMG(0x101095d0u), self + 0x20u, 1, sp0 - 8u);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    ebx = (in_ebx & 0xffffff00u) | (int32_t)t10 <= 0;
L_1010af75: ;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t27 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 8u, 0);
    eax = t27;
L_1010af7e: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010ad90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010ad90(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
