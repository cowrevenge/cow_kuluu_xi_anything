/* f_0x1007a0b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1007a0b0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 0u) goto L_1007a0d8;
    if (rd8(COW_IMG(0x1047d4c0u)) != 0u)
    {
        eax = (arg2 & 0xffffff00u) | rd8(COW_IMG(0x1047d4c0u));
        edx = in_edx;
        goto L_1007a148;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0xa2u);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_1007a0d8: ;
    if (rd32(arg2) != 3u)
    {
        eax = arg2;
        edx = in_edx;
    }
    else
    {
        if (rd32(COW_IMG(0x104dfd98u)) == 0u)
        {
            eax = rd32(COW_IMG(0x104dfd98u));
            edx = in_edx;
        }
        else
        {
            eax = rd32(COW_IMG(0x104dfd98u));
            edi = rd32(arg2 + 8u);
            if (rd32(eax + 0x3c390u) == rd32(edi + 0x18u))
            {
                eax = rd32(eax + 0x3c390u);
                edx = in_edx;
            }
            else
            {
                ecx = rd32(edi + 0x18u);
                eax = edi + 4u;
                edx = in_edx;
                ebx = in_ebx;
                esi = COW_IMG(0x1047d340u);
L_1007a100: ;
                if (rd8(eax) != rd8(esi))
                {
                    edx = (edx & 0xffffff00u) | rd8(eax);
                    cf = rd8(eax) < rd8(esi);
                    goto L_1007a128;
                }
                ecx = (ecx & 0xffffff00u) | rd8(eax);
                edx = (edx & 0xffffff00u) | rd8(eax);
                ebx = (ebx & 0xffffff00u) | rd8(esi);
                if ((uint8_t)ecx == 0u) goto L_1007a124;
                if (rd8(eax + 1u) != rd8(esi + 1u))
                {
                    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
                    cf = rd8(eax + 1u) < rd8(esi + 1u);
                    goto L_1007a128;
                }
                ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
                edx = (edx & 0xffffff00u) | rd8(eax + 1u);
                ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
                if ((uint8_t)ecx != 0u)
                {
                    eax = eax + 2u;
                    esi = esi + 2u;
                    goto L_1007a100;
                }
L_1007a124: ;
                eax = 0u;
L_1007a12d: ;
                if (eax == 0u)
                {
                    g->edx = edx;
                    g->esp = sp0 - 4u;
                    t3 = cow_call_regs(g, COW_IMG(0x101ffa20u), eax, rd32(COW_IMG(0x10663ab8u)), g->edx, 0, 2, edi, 1u);
                    t4 = g->edx;
                    wr8(COW_IMG(0x1047d4c0u), 1u);
                    eax = t3;
                    edx = t4;
                }
            }
        }
    }
L_1007a148: ;
    g->edx = edx;
    return eax;
L_1007a128: ;
    eax = -cf + 1u - cf;
    goto L_1007a12d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007a0b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007a0b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
