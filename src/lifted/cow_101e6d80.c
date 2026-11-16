/* f_0x101e6d80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101e6d80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x160u) != 3u) goto L_101e6dfb;
    eax = 0u;
L_101e6d94: ;
    if ((uint32_t)(int16_t)rd16(COW_IMG(0x1037f612u) + eax * 4u) == arg1) goto L_101e6ddd;
    if ((int32_t)(eax + 1u) < 8)
    {
        eax = eax + 1u;
        goto L_101e6d94;
    }
    if ((int16_t)rd16(self + 0x168u) <= 8)
    {
        eax = 8u;
        goto L_101e6e32;
    }
    edx = (uint32_t)(int16_t)rd16(self + 0x168u);
    eax = 8u;
    ecx = rd32(self + 0x15cu) + 0x11cu;
    esi = rd32(self + 0x15cu);
L_101e6dc2: ;
    if ((uint32_t)(int16_t)rd16(rd32(ecx) + 2u) == arg1) goto L_101e6deb;
    if ((int32_t)(eax + 1u) < (int32_t)edx)
    {
        eax = eax + 1u;
        ecx = ecx + 0x20u;
        goto L_101e6dc2;
    }
    eax = eax + 1u;
    return 0xffffffffu;
L_101e6ddd: ;
    return (uint32_t)(int16_t)rd16(COW_IMG(0x1037f610u) + eax * 4u);
L_101e6deb: ;
    return (uint32_t)(int16_t)rd16(rd32(eax * 0x20u + esi + 0x1cu));
L_101e6dfb: ;
    if ((int16_t)rd16(self + 0x166u) >= (int16_t)rd16(self + 0x168u))
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x166u);
        goto L_101e6e32;
    }
    eax = (uint32_t)(int16_t)rd16(self + 0x166u);
    edx = (uint32_t)(int16_t)rd16(self + 0x168u);
    ecx = eax * 0x20u + rd32(self + 0x15cu) + 0x1cu;
    esi = rd32(self + 0x15cu);
L_101e6e20: ;
    if ((uint32_t)(int16_t)rd16(rd32(ecx) + 2u) == arg1) goto L_101e6e3b;
    if ((int32_t)(eax + 1u) < (int32_t)edx)
    {
        eax = eax + 1u;
        ecx = ecx + 0x20u;
        goto L_101e6e20;
    }
    eax = eax + 1u;
L_101e6e32: ;
    return 0xffffffffu;
L_101e6e3b: ;
    return (uint32_t)(int16_t)rd16(rd32(eax * 0x20u + esi + 0x1cu));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e6d80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e6d80(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
