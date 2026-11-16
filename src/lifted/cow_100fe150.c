/* f_0x100fe150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100fe150(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 4u);
    t2 = rd32(sp0 + 8u);
    wr8(sp0 + 4u, 0u);
    if ((uint16_t)arg3 == 0u)
    {
        eax = t1 & 0xffffff00u;
        loc_4 = t1;
        goto L_100fe1f0;
    }
    eax = t1 & 0xffffff00u;
    edi = t2;
    loc_4 = t1;
    ecx = 0u;
    edx = in_edx & 0xffffff00u;
    ebx = in_ebx;
    ebp = loc_4;
    esi = arg3;
L_100fe178: ;
    if ((uint16_t)ecx == 0u)
    {
        wr8(sp0 + 4u, rd8(ebp));
        ecx = 8u;
        ebp = ebp + 1u;
    }
    t3 = rd8(sp0 + 4u);
    wr32(sp0 + 8u, ecx + 0xffffu);
    if ((uint8_t)((uint8_t)edx + 1u) < 6u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u | (((ecx + 0xffffu & 0x1fu) != 0u ? t3 >> (ecx + 0xffffu & 0x1fu) : t3) & 1u));
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx + 1u);
        ebx = (ebx & 0xffffff00u) | (((ecx + 0xffffu & 0x1fu) != 0u ? t3 >> (ecx + 0xffffu & 0x1fu) : t3) & 1u);
        goto L_100fe1da;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u | (((ecx + 0xffffu & 0x1fu) != 0u ? t3 >> (ecx + 0xffffu & 0x1fu) : t3) & 1u));
    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx + 1u);
    ebx = (ebx & 0xffffff00u) | (((ecx + 0xffffu & 0x1fu) != 0u ? t3 >> (ecx + 0xffffu & 0x1fu) : t3) & 1u);
    ecx = ecx + 0xffffu;
    if ((uint8_t)eax < 0x25u) goto L_100fe1b3;
    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)eax + 0x3cu);
L_100fe1c9: ;
    wr8(edi, (uint8_t)edx);
L_100fe1cb: ;
    if ((uint8_t)eax == 0u) goto L_100fe1e8;
    edi = edi + 1u;
    eax = eax & 0xffffff00u;
    edx = edx & 0xffffff00u;
    esi = esi + 0xffffu;
L_100fe1da: ;
    if ((uint16_t)esi == 0u) goto L_100fe1f0;
    ecx = rd32(sp0 + 8u);
    goto L_100fe178;
L_100fe1b3: ;
    if ((uint8_t)eax < 0xbu) goto L_100fe1c0;
    wr8(edi, (uint8_t)((uint8_t)eax + 0x36u));
    goto L_100fe1cb;
L_100fe1c0: ;
    if ((uint8_t)eax < 1u) goto L_100fe1e5;
    edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)eax + 0x2fu);
    goto L_100fe1c9;
L_100fe1e5: ;
    wr8(edi, 0u);
L_100fe1e8: ;
    return (eax & 0xffffff00u) | 1u;
L_100fe1f0: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fe150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fe150(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
