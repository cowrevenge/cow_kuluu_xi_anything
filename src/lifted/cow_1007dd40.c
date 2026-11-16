/* f_0x1007dd40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1007dd40(Guest* g)
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 == 0u)
    {
        eax = arg2;
        edx = in_edx;
    }
    else
    {
        if (rd32(arg2) != 3u)
        {
            eax = arg2;
            edx = in_edx;
        }
        else
        {
            eax = arg1;
            ecx = self;
            edx = in_edx;
            ebx = in_ebx;
            esi = rd32(arg2 + 8u) + 4u;
            edi = rd32(arg2 + 8u);
L_1007dd5a: ;
            if (rd8(eax) != rd8(esi))
            {
                ecx = (ecx & 0xffffff00u) | rd8(eax);
                edx = (edx & 0xffffff00u) | rd8(eax);
                cf = rd8(eax) < rd8(esi);
                goto L_1007dd82;
            }
            ecx = (ecx & 0xffffff00u) | rd8(eax);
            edx = (edx & 0xffffff00u) | rd8(eax);
            ebx = (ebx & 0xffffff00u) | rd8(esi);
            if ((uint8_t)ecx == 0u) goto L_1007dd7e;
            if (rd8(eax + 1u) != rd8(esi + 1u))
            {
                ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
                edx = (edx & 0xffffff00u) | rd8(eax + 1u);
                cf = rd8(eax + 1u) < rd8(esi + 1u);
                goto L_1007dd82;
            }
            ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
            edx = (edx & 0xffffff00u) | rd8(eax + 1u);
            ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
            if ((uint8_t)ecx != 0u)
            {
                eax = eax + 2u;
                esi = esi + 2u;
                goto L_1007dd5a;
            }
L_1007dd7e: ;
            eax = 0u;
L_1007dd87: ;
            if (eax == 0u)
            {
                t1 = rd32(edi + 0x18u);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 4u;
                t2 = cow_cdecl(g, COW_IMG(0x100e9590u), 3, 1u, t1, eax);
                t3 = g->ecx;
                t4 = g->edx;
                if ((uint8_t)t2 != 0u)
                {
                    eax = t2;
                    edx = t4;
                }
                else
                {
                    eax = t2;
                    ecx = t3;
                    edx = t4;
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 4u;
                    t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x78u);
                    t6 = g->ecx;
                    t7 = g->edx;
                    g->edx = t7;
                    g->esp = sp0 - 8u;
                    t8 = cow_cdecl(g, COW_IMG(0x10077e30u), 2, t5, 9u);
                    t9 = g->edx;
                    eax = t8;
                    edx = t9;
                }
            }
        }
    }
    g->edx = edx;
    return eax;
L_1007dd82: ;
    eax = -cf + 1u - cf;
    goto L_1007dd87;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007dd40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007dd40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
