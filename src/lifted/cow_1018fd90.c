/* f_0x1018fd90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1018fd90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg2 <= 0)
    {
        eax = in_eax;
    }
    else
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
        esi = 0u;
L_1018fda1: ;
        t1 = (eax & 0xffffff00u) | rd8(arg1 + esi);
        g->eax = t1;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t2 = cow_cdecl(g, COW_IMG(0x1018fa80u), 2, t1, 0u);
        t3 = g->ecx;
        t4 = g->edx;
        if (t2 != 2u)
        {
            eax = t2;
            ecx = t3;
            edx = t4;
        }
        else
        {
            eax = t2;
            ecx = t3;
            edx = t4;
            if (rd8(arg1 + esi) == 0x82u)
            {
                if (rd8(arg1 + esi + 1u) < 0x9fu)
                {
                    ecx = (ecx & 0xffffff00u) | rd8(arg1 + esi + 1u);
                    goto L_1018fdcd;
                }
                ecx = (ecx & 0xffffff00u) | rd8(arg1 + esi + 1u);
                if ((uint8_t)ecx > 0xddu) goto L_1018fdcd;
                ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx - 0x5fu);
L_1018fdda: ;
                wr8(arg1 + esi, 0x83u);
                wr8(arg1 + esi + 1u, (uint8_t)ecx);
            }
        }
L_1018fde2: ;
        if ((int32_t)(eax + esi) < (int32_t)arg2)
        {
            esi = eax + esi;
            goto L_1018fda1;
        }
    }
    return (eax & 0xffffff00u) | 1u;
L_1018fdcd: ;
    if ((uint8_t)ecx < 0xdeu) goto L_1018fde2;
    if ((uint8_t)ecx > 0xf1u) goto L_1018fde2;
    ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx - 0x5eu);
    goto L_1018fdda;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018fd90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018fd90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
