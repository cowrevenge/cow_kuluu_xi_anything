/* f_0x101e1f40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_101e1f40(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;

    if (rd8(self) != 0u)
    {
        esi = (in_esi & 0xffff0000u) | rd16(self + 0xcu);
        loc_8 = (rd32(sp0 - 8u) & 0xffffff00u) | rd8(self);
        goto L_101e1f61;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self);
    return eax;
L_101e1f61: ;
    g->ecx = self;
    g->esp = sp0 - 0x18u;
    t1 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, 0u, loc_8);
    t2 = g->ecx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        goto L_101e1f80;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_101e1f80: ;
    if (rd8(eax + 8u) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 8u);
        goto L_101e1f93;
    }
    return eax & 0xffffff00u;
L_101e1f93: ;
    if ((uint16_t)esi != 0u) goto L_101e1fa4;
    return eax & 0xffffff00u;
L_101e1fa4: ;
    if (rd16(eax) == (uint16_t)esi) goto L_101e1fb5;
    return eax & 0xffffff00u;
L_101e1fb5: ;
    if (rd32(eax + 4u) >= 1u) goto L_101e1fc7;
L_101e1fbb: ;
    return eax & 0xffffff00u;
L_101e1fc7: ;
    ebx = self + 0xeu;
    esi = self + 0x22u;
    edi = self;
    loc_4 = rd32(sp0 - 4u);
L_101e1fd4: ;
    if (rd8(esi - 0x21u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi - 0x21u);
        goto L_101e2029;
    }
    ecx = (ecx & 0xffffff00u) | rd8(esi);
    edi = (edi & 0xffff0000u) | rd16(ebx);
    loc_8 = (loc_8 & 0xffffff00u) | rd8(esi - 0x21u);
    loc_4 = (loc_4 & 0xffffff00u) | rd8(esi);
    g->ecx = ecx;
    g->esp = sp0 - 0x18u;
    t3 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, 0u, loc_8);
    t4 = g->ecx;
    if (t3 == 0u)
    {
        eax = t3;
        goto L_101e1fbb;
    }
    eax = t3;
    ecx = t4;
    if (rd8(eax + 8u) != 0u) goto L_101e1fbb;
    if ((uint16_t)edi == 0u) goto L_101e1fbb;
    if (rd16(eax) != (uint16_t)edi) goto L_101e1fbb;
    if (rd32(eax + 4u) < (uint8_t)loc_4) goto L_101e1fbb;
    ecx = (uint8_t)loc_4;
    if ((int32_t)(esi - self - 0x21u) < 10)
    {
        ebx = ebx + 2u;
        esi = esi + 1u;
        goto L_101e1fd4;
    }
L_101e2029: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e1f40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e1f40(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
