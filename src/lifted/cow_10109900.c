/* f_0x10109900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=1 */
uint32_t cow_fn_10109900(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        ebx = 0u;
    }
    else
    {
        eax = rd32(self + 4u);
        ebx = rd32(eax + 4u);
    }
    ecx = self;
    edx = in_edx;
    loc_4 = 0u;
L_1010991b: ;
    if (rd8(ebx) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebx);
        goto L_101099bf;
    }
    eax = (eax & 0xffffff00u) | rd8(ebx);
    if ((uint8_t)eax != rd8(arg1))
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1);
        goto L_1010996f;
    }
    ecx = (ecx & 0xffffff00u) | rd8(arg1);
    if ((uint8_t)ecx == 0u) goto L_1010996f;
    esi = ebx;
    edi = arg1;
L_10109935: ;
    if (rd8(edi) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(edi);
        goto L_10109965;
    }
    ecx = (ecx & 0xffffff00u) | rd8(edi);
    if (rd8(esi) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        goto L_101099b2;
    }
    eax = (eax & 0xffffff00u) | rd8(esi);
    sf = (int8_t)rd8(esi) < 0;
    if (sf) goto L_10109991;
    if ((int8_t)ecx < 0) goto L_10109991;
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x103145e4u), g->eax, ecx, edx, 1, 1, (uint8_t)eax);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = rd8(edi);
    g->esp = sp0 - 0x18u;
    t5 = cow_call_regs(g, COW_IMG(0x103145e4u), g->eax, t2, t3, 1, 1, t4);
    t6 = g->ecx;
    t7 = g->edx;
    if (t1 == t5)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        goto L_101099a9;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
L_10109965: ;
    if (rd8(esi) == 0u) goto L_101099b2;
    if (rd8(edi) == 0u) goto L_101099b2;
L_1010996f: ;
    if ((int8_t)rd8(ebx) < 0)
    {
        if (rd8(ebx + 1u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(ebx + 1u);
        }
        else
        {
            eax = loc_4 + 1u;
            ebx = ebx + 1u;
            loc_4 = loc_4 + 1u;
        }
    }
    edx = loc_4 + 1u;
    ebx = ebx + 1u;
    loc_4 = loc_4 + 1u;
    goto L_1010991b;
L_10109991: ;
    if ((uint8_t)eax != (uint8_t)ecx) goto L_10109965;
    if (rd8(esi + 1u) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi + 1u);
        goto L_1010996f;
    }
    ecx = (ecx & 0xffffff00u) | rd8(esi + 1u);
    if (rd8(edi + 2u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi + 2u);
        goto L_1010996f;
    }
    eax = (eax & 0xffffff00u) | rd8(edi + 2u);
    if ((uint8_t)ecx != (uint8_t)eax) goto L_1010996f;
    esi = esi + 1u;
    edi = edi + 1u;
L_101099a9: ;
    if (rd8(esi + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        edi = edi + 1u;
        goto L_10109935;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 1u);
L_101099b2: ;
    g->edx = edx;
    return (eax & 0xffff0000u) | (uint16_t)loc_4;
L_101099bf: ;
    g->edx = edx;
    return (eax & 0xffff0000u) | (uint16_t)(eax | 0xffffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10109900(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10109900(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
