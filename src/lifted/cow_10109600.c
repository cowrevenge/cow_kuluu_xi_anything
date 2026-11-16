/* f_0x10109600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10109600(Guest* g)
{
    uint32_t cf;
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
    uint32_t t2;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 4u) != 0u)
    {
        eax = rd32(self + 4u);
        goto L_10109621;
    }
    eax = rd32(self + 4u);
    if (arg1 != 0u) goto L_1010961d;
    return 1u;
L_1010961d: ;
    if (eax == 0u)
    {
        ecx = self;
        goto L_1010963e;
    }
L_10109621: ;
    if (rd32(eax + 4u) != 0u)
    {
        ecx = rd32(eax + 4u);
        goto L_1010963e;
    }
    if (arg1 == 0u)
    {
        edx = in_edx;
        goto L_101096b1;
    }
    if (rd8(arg1) == 0u)
    {
        edx = in_edx;
        goto L_101096b1;
    }
    return 0xffffffffu;
L_1010963e: ;
    if (arg1 != 0u) goto L_1010964d;
    return 1u;
L_1010964d: ;
    if (eax == 0u)
    {
        edi = 0u;
    }
    else
    {
        edi = rd32(eax + 4u);
    }
    if (rd8(edi) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi);
        edx = in_edx;
        esi = arg1;
        goto L_101096a9;
    }
    eax = (eax & 0xffffff00u) | rd8(edi);
    edx = in_edx;
    ebx = in_ebx;
    esi = arg1;
L_1010965e: ;
    if (rd8(esi) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi);
        goto L_101096a9;
    }
    ecx = (ecx & 0xffffff00u) | rd8(esi);
    if ((int8_t)eax >= 0) goto L_10109682;
    if ((int8_t)ecx >= 0) goto L_10109682;
    if ((uint8_t)eax != (uint8_t)ecx) goto L_101096b9;
    if (rd8(edi + 1u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi + 1u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(edi + 1u);
        if (rd8(esi + 1u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(esi + 1u);
            esi = esi + 1u;
            edi = edi + 1u;
        }
    }
L_101096a0: ;
    if (rd8(edi + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi + 1u);
        esi = esi + 1u;
        edi = edi + 1u;
        goto L_1010965e;
    }
    eax = (eax & 0xffffff00u) | rd8(edi + 1u);
    esi = esi + 1u;
    edi = edi + 1u;
L_101096a9: ;
    if (rd8(esi) != rd8(edi))
    {
        eax = (eax & 0xffffff00u) | rd8(edi);
        cf = rd8(esi) < rd8(edi);
        goto L_101096bf;
    }
L_101096b1: ;
    g->edx = edx;
    return 0u;
L_10109682: ;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x103145e4u), g->eax, ecx, edx, 1, 1, (uint8_t)eax);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = rd8(esi);
    g->esp = sp0 - 0x10u;
    t5 = cow_call_regs(g, COW_IMG(0x103145e4u), g->eax, t2, t3, 1, 1, t4);
    t6 = g->ecx;
    t7 = g->edx;
    if (t1 != t5)
    {
        ecx = t6;
        goto L_101096cb;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    ebx = t1;
    goto L_101096a0;
L_101096b9: ;
    cf = rd8(esi) < rd8(edi);
L_101096bf: ;
    g->edx = edx;
    return (-cf & 2u) - 1u;
L_101096cb: ;
    t8 = rd8(edi);
    g->esp = sp0 - 0xcu;
    t9 = cow_call_regs(g, COW_IMG(0x103145e4u), g->eax, ecx, t8, 1, 1, t8);
    t10 = g->ecx;
    t11 = g->edx;
    t12 = rd8(esi);
    g->esp = sp0 - 0x10u;
    t13 = cow_call_regs(g, COW_IMG(0x103145e4u), g->eax, t10, t11, 1, 1, t12);
    t14 = g->edx;
    t15 = ((int32_t)t9 > (int32_t)t13) * 2u - 1u;
    g->edx = t14;
    return t15;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10109600(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10109600(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
