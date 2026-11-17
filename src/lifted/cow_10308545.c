/* f_0x10308545 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10308545(Guest* g)
{
    uint32_t eax;
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(arg1 + 0x28u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall_cdecl(g, rd32(arg1 + 0x20u), self, 3, t1, 1u, 0x40u);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        edx = t4;
        goto L_1030857e;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    edi = t2;
    t5 = rd32(arg1 + 0x28u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall_cdecl(g, rd32(arg1 + 0x20u), ecx, 3, t5, 8u, 0x5a0u);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(edi + 0x24u, t6);
    if (t6 != 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_10308582;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    t9 = rd32(arg1 + 0x28u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, rd32(arg1 + 0x24u), ecx, 2, t9, edi);
    t10 = g->edx;
    edx = t10;
L_1030857e: ;
    eax = 0u;
L_103085cf: ;
    g->edx = edx;
    return eax;
L_10308582: ;
    t11 = rd32(arg1 + 0x28u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall_cdecl(g, rd32(arg1 + 0x20u), ecx, 3, t11, 1u, arg3);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(edi + 0x28u, t12);
    if (t12 != 0u)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        wr32(edi, 0u);
        wr32(edi + 0x2cu, arg3 + eax);
        wr32(edi + 0x38u, arg2);
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x103084dau), g->eax, ecx, edx, 1, 5, edi, arg1, 0u, in_ebx, in_edi);
        t22 = g->edx;
        eax = edi;
        edx = t22;
    }
    else
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        t15 = rd32(edi + 0x24u);
        t16 = rd32(arg1 + 0x28u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t17 = cow_thiscall_cdecl(g, rd32(arg1 + 0x24u), ecx, 2, t16, t15);
        t18 = g->ecx;
        t19 = g->edx;
        t20 = rd32(arg1 + 0x28u);
        g->edx = t19;
        g->esp = sp0 - 0x14u;
        cow_thiscall_cdecl(g, rd32(arg1 + 0x24u), t18, 2, t20, edi);
        t21 = g->edx;
        eax = 0u;
        edx = t21;
    }
    goto L_103085cf;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10308545(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10308545(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
