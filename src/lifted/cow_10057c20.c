/* f_0x10057c20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10057c20(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    if (rd32(self + 0x80u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 0x80u);
        eax = rd32(eax);
    }
    if (rd32(eax + 0x78u) == 0u)
    {
        edx = in_edx;
        ebx = (in_ebx & 0xffffff00u) | 1u;
        goto L_10057c7a;
    }
    edx = in_edx;
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = rd32(eax + 0x78u);
L_10057c3e: ;
    if (rd8(esi) == 1u)
    {
        if (rd32(self + 0x80u) == 0u)
        {
            ebx = ebx & 0xffffff00u;
            eax = 0u;
        }
        else
        {
            eax = rd32(self + 0x80u);
            ebx = ebx & 0xffffff00u;
            eax = rd32(eax);
        }
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x100573e0u), self, 3, eax, 0u, 0u);
        t1 = g->edx;
        edx = t1;
    }
    if ((uint8_t)rd32(esi) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(esi);
        eax = esi + (eax >> 8u & 0x1fu) * 4u;
    }
    if (eax != 0u)
    {
        esi = eax;
        goto L_10057c3e;
    }
L_10057c7a: ;
    if (rd8(self + 0x141u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x141u);
        goto L_10057cb0;
    }
    if (rd32(self + 0x80u) == 0u)
    {
        ebx = ebx & 0xffffff00u;
        goto L_10057ca4;
    }
    eax = rd32(self + 0x80u);
    ebx = ebx & 0xffffff00u;
    g->eax = rd32(eax);
    t2 = rd32(eax);
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x100573e0u), self, 3, t2, 0u, 0u);
    return (t3 & 0xffffff00u) | (uint8_t)ebx;
L_10057ca4: ;
    g->eax = 0u;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x100573e0u), self, 3, 0u, 0u, 0u);
    eax = t4;
L_10057cb0: ;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10057c20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10057c20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
