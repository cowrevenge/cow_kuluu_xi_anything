/* f_0x10243ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10243ff0(Guest* g)
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 564u);

    wr32(sp0 - 0x21cu, in_ebx);
    wr32(sp0 - 0x220u, in_esi);
    wr32(sp0 - 0x224u, in_edi);
    wr32(sp0 - 0x218u, COW_IMG(0x1033cb7cu));
    wr32(sp0 - 0x214u, 0u);
    wr32(sp0 - 0x210u, 0u);
    wr32(sp0 - 0x20cu, 0u);
    wr32(sp0 - 0x208u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x224u;
    t1 = cow_thiscall(g, COW_IMG(0x100dbe10u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x204u, t1);
    wr32(sp0 - 0x210u, arg1);
    wr8(sp0 - 0x200u, 0u);
    wr8(sp0 - 0x100u, 0u);
    if (arg2 != 0u)
    {
        edx = t3;
        goto L_1024406a;
    }
    ecx = t2;
    edx = t3;
    if ((uint8_t)arg3 == 0u) goto L_1024405e;
    wr32(sp0 - 0x228u, arg4);
    wr32(sp0 - 0x22cu, sp0 - 0x218u);
    g->ebx = 0u;
    g->eax = arg2;
    g->ecx = arg4;
    g->edx = sp0 - 0x218u;
    g->esp = sp0 - 0x218u;
    t4 = cow_cdecl(g, COW_IMG(0x10244b60u), 5, sp0 - 0x218u, arg4, in_edi, in_esi, in_ebx);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
L_102440ad: ;
    wr32(sp0 - 0x218u, COW_IMG(0x1033cb7cu));
    if (rd32(sp0 - 0x20cu) == 0u)
    {
        edi = eax;
    }
    else
    {
        edi = eax;
        eax = rd32(sp0 - 0x20cu);
        wr32(sp0 - 0x228u, eax);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x224u;
        cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, eax);
        t19 = g->ecx;
        t20 = g->edx;
        wr32(sp0 - 0x20cu, 0u);
        ecx = t19;
        edx = t20;
    }
    if (rd32(sp0 - 0x208u) != 0u)
    {
        eax = rd32(sp0 - 0x208u);
        wr32(sp0 - 0x228u, eax);
        g->esp = sp0 - 0x224u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
    }
    g->ebx = rd32(sp0 - 0x21cu);
    g->esi = rd32(sp0 - 0x220u);
    g->edi = rd32(sp0 - 0x224u);
    return edi;
L_1024405e: ;
    wr32(sp0 - 0x228u, sp0 - 0x218u);
    g->eax = sp0 - 0x218u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x224u;
    t7 = cow_cdecl(g, COW_IMG(0x10244990u), 1, sp0 - 0x218u);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
L_102440aa: ;
    goto L_102440ad;
L_1024406a: ;
    wr32(sp0 - 0x228u, arg2 - 1u);
    wr32(sp0 - 0x22cu, COW_IMG(0x10388378u));
    wr32(sp0 - 0x230u, sp0 - 0x200u);
    g->ebx = 0u;
    g->eax = arg2 - 1u;
    g->ecx = sp0 - 0x200u;
    g->edx = edx;
    g->esp = sp0 - 0x21cu;
    t10 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, COW_IMG(0x10388378u), arg2 - 1u, in_edi, in_esi);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)arg3 == 0u)
    {
        eax = (t10 & 0xffffff00u) | (uint8_t)arg3;
        edx = t12;
        goto L_102440a0;
    }
    ecx = t11;
    wr32(sp0 - 0x228u, arg4);
    wr32(sp0 - 0x22cu, sp0 - 0x218u);
    g->ebx = 0u;
    g->eax = sp0 - 0x218u;
    g->ecx = ecx;
    g->edx = arg4;
    g->esp = sp0 - 0x220u;
    t13 = cow_cdecl(g, COW_IMG(0x102447e0u), 3, sp0 - 0x218u, arg4, rd32(sp0 - 0x224u));
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
    goto L_102440ad;
L_102440a0: ;
    wr32(sp0 - 0x228u, sp0 - 0x218u);
    g->eax = eax;
    g->ecx = sp0 - 0x218u;
    g->edx = edx;
    g->esp = sp0 - 0x21cu;
    t16 = cow_cdecl(g, COW_IMG(0x10244140u), 3, sp0 - 0x218u, rd32(sp0 - 0x224u), rd32(sp0 - 0x220u));
    t17 = g->ecx;
    t18 = g->edx;
    eax = t16;
    ecx = t17;
    edx = t18;
    goto L_102440aa;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10243ff0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10243ff0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
