/* f_0x10204940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_10204940(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x106643a8u)) != 0u)
    {
        esi = rd32(COW_IMG(0x106643a8u));
        goto L_10204957;
    }
    return in_eax & 0xffffff00u;
L_10204957: ;
    t1 = rd32(arg2 + 0x1cu);
    g->ebx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_call_regs(g, COW_IMG(0x102031f0u), t1, g->ecx, g->edx, 0, 3, t1, 1u, 1u);
    t3 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        edx = t3;
        goto L_10204974;
    }
    eax = t2;
    edx = t3;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
L_10204974: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x10203190u), esi, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t6;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        eax = eax + 2u;
        esi = arg2 + 8u;
L_1020498a: ;
        if (rd8(eax) != rd8(esi))
        {
            edx = (edx & 0xffffff00u) | rd8(eax);
            cf = rd8(eax) < rd8(esi);
            goto L_102049ae;
        }
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        if ((uint8_t)ecx == 0u) goto L_102049aa;
        if (rd8(eax + 1u) != rd8(esi + 1u))
        {
            edx = (edx & 0xffffff00u) | rd8(eax + 1u);
            cf = rd8(eax + 1u) < rd8(esi + 1u);
            goto L_102049ae;
        }
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        if ((uint8_t)ecx != 0u)
        {
            eax = eax + 2u;
            esi = esi + 2u;
            goto L_1020498a;
        }
L_102049aa: ;
        eax = 0u;
L_102049b3: ;
        if (eax == 0u)
        {
            t7 = rd32(self + 0x898u);
            g->eax = t7;
            g->esp = sp0 - 0x10u;
            t8 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, edx, 4, 0u, 0xeu, t7, 0x80808080u);
            t9 = g->edx;
            eax = t8;
            edx = t9;
        }
    }
    if (rd8(arg2 + 0x26u) < 0xau) goto L_102049e7;
    if ((rd32(arg2 + 0x34u) >> 8u & 0x40u) != 0u)
    {
        eax = rd32(arg2 + 0x34u);
        goto L_102049e7;
    }
    eax = rd32(arg2 + 0x34u);
    loc_14 = 0x80808080u;
L_102049f0: ;
    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, edx, 4, 2u, 0x25u, arg2 + 8u, loc_14);
    t10 = g->edx;
    g->eax = arg2 + 4u;
    t11 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t10, 4, 1u, 0x10u, arg2 + 4u, 0x80808080u);
    t12 = g->edx;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = t11;
        edx = t12;
    }
    else
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
        if (rd32(ecx + 0x3c350u) == rd16(arg2 + 0x2cu))
        {
            eax = rd16(arg2 + 0x2cu);
            edx = rd32(ecx + 0x3c350u);
        }
        else
        {
            eax = rd16(arg2 + 0x2cu);
            edx = rd32(ecx + 0x3c350u);
            g->ebx = self;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t13 = cow_cdecl(g, COW_IMG(0x101cbc10u), 4, eax, 0u, 0x80808080u, in_ebp);
            t14 = g->edx;
            g->esp = sp0 - 0x10u;
            t15 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t14, 4, 3u, 0x23u, t13, 0x80808080u);
            t16 = g->edx;
            eax = t15;
            edx = t16;
        }
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_102049ae: ;
    eax = -cf + 1u - cf;
    goto L_102049b3;
L_102049e7: ;
    edx = arg2 + 8u;
    loc_14 = 0x80404040u;
    goto L_102049f0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10204940(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10204940(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
