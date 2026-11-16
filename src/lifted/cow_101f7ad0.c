/* f_0x101f7ad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101f7ad0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x10663888u)) == 0u)
    {
        eax = in_eax;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10663888u));
        if ((uint8_t)arg2 == 0u)
        {
            eax = in_eax;
        }
        else
        {
            if ((rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 0x80u) == 0u)
            {
                eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
                goto L_101f7afd;
            }
            eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
            if (eax == 2u) goto L_101f7b11;
            if (eax == 3u) goto L_101f7b11;
L_101f7afd: ;
            if (eax != 0u) goto L_101f7b11;
            eax = (uint8_t)arg1 + 0x82e9u;
L_101f7b1f: ;
            t1 = eax * 3u + (uint8_t)arg3;
            g->eax = t1;
            g->esp = sp0 - 8u;
            t2 = cow_thiscall(g, COW_IMG(0x101fb140u), ecx, 3, t1, arg2, arg3);
            eax = t2;
        }
    }
    return (eax & 0xffffff00u) | 1u;
L_101f7b11: ;
    eax = (uint8_t)arg1 + 0x83b1u;
    goto L_101f7b1f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7ad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f7ad0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
