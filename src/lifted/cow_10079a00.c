/* f_0x10079a00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10079a00(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t of;
    uint32_t sf;
    uint32_t t1;
    uint32_t zf;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_10079af0;
    }
    if (rd8(arg1) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg1);
        edx = in_edx;
        goto L_10079af0;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg1);
    if ((uint32_t)(int8_t)eax == 0x24u)
    {
        eax = (uint32_t)(int8_t)eax - 0x24u;
        goto L_10079a43;
    }
    eax = (uint32_t)(int8_t)eax - 0x24u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10079a3b;
    }
    eax = eax - 1u;
    if (eax == 0xbu)
    {
        eax = eax - 0xbu;
        goto L_10079a30;
    }
    eax = eax - 0xbu;
L_10079a29: ;
    ebp = 0xau;
    esi = arg1;
L_10079a49: ;
    ecx = (self & 0xffffff00u) | rd8(esi);
    edi = 0u;
L_10079a4d: ;
    if (ebp == 2u)
    {
        edx = ebp - 2u;
        goto L_10079a8a;
    }
    edx = ebp - 2u;
    if (edx == 8u)
    {
        edx = edx - 8u;
        goto L_10079a80;
    }
    edx = edx - 8u;
    if (edx != 6u)
    {
        edx = edx - 6u;
        goto L_10079af0;
    }
    edx = edx - 6u;
    if ((int8_t)ecx < 48) goto L_10079a6c;
    if ((int8_t)ecx <= 57) goto L_10079a94;
L_10079a6c: ;
    if ((int8_t)ecx < 97) goto L_10079a76;
    if ((int8_t)ecx <= 102) goto L_10079a94;
L_10079a76: ;
    if ((int8_t)ecx < 65) goto L_10079af0;
    zf = (uint8_t)((uint8_t)ecx - 0x46u) == 0u;
    sf = (int8_t)((uint8_t)ecx - 0x46u) < 0;
    of = (((uint8_t)ecx ^ 0x46u) & ((uint8_t)ecx ^ (uint8_t)((uint8_t)ecx - 0x46u))) >> 7u;
L_10079a92: ;
    if (!zf && sf == of) goto L_10079af0;
L_10079a94: ;
    if ((int8_t)ecx < 48)
    {
        edx = 0u;
    }
    else
    {
        if ((int8_t)ecx > 57)
        {
            edx = 0u;
        }
        else
        {
            edx = (uint32_t)(int8_t)ecx - 0x30u;
        }
    }
    if ((int8_t)ecx >= 65)
    {
        if ((int8_t)ecx <= 70)
        {
            edx = (uint32_t)(int8_t)ecx - 0x37u;
        }
    }
    if ((int8_t)ecx >= 97)
    {
        if ((int8_t)ecx <= 102)
        {
            edx = (uint32_t)(int8_t)ecx - 0x57u;
        }
    }
    if ((uint32_t)(int8_t)rd8(esi + 1u) > 0x20u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        edi = edx + edi * ebp;
        goto L_10079a4d;
    }
    ecx = (ecx & 0xffffff00u) | rd8(esi + 1u);
    edi = edx + edi * ebp;
    edx = (uint32_t)(int8_t)rd8(esi + 1u);
    esi = esi + 1u;
    t1 = rd32(COW_IMG(0x10079af8u) + rd8(COW_IMG(0x10079b00u) + edx) * 4u);
    switch (t1 - RD)
    {
    case 0x10079a4du: eax = rd8(COW_IMG(0x10079b00u) + edx); goto L_10079a4d;
    case 0x10079aeau: goto L_10079aea;
    default: rt_fatal(g, COW_IMG(0x10079ae3u), "switch");
    }
    return 0;
L_10079a30: ;
    if (rd8(arg1 + 1u) != 0x78u) goto L_10079a29;
    esi = arg1 + 2u;
L_10079a44: ;
    ebp = 0x10u;
    goto L_10079a49;
L_10079a3b: ;
    ebp = 2u;
    esi = arg1 + 1u;
    goto L_10079a49;
L_10079a43: ;
    esi = arg1 + 1u;
    goto L_10079a44;
L_10079a80: ;
    if ((int8_t)ecx < 48) goto L_10079af0;
    zf = (uint8_t)((uint8_t)ecx - 0x39u) == 0u;
    sf = (int8_t)((uint8_t)ecx - 0x39u) < 0;
    of = (((uint8_t)ecx ^ 0x39u) & ((uint8_t)ecx ^ (uint8_t)((uint8_t)ecx - 0x39u))) >> 7u;
    goto L_10079a92;
L_10079a8a: ;
    if ((int8_t)ecx < 48) goto L_10079af0;
    zf = (uint8_t)((uint8_t)ecx - 0x31u) == 0u;
    sf = (int8_t)((uint8_t)ecx - 0x31u) < 0;
    of = (((uint8_t)ecx ^ 0x31u) & ((uint8_t)ecx ^ (uint8_t)((uint8_t)ecx - 0x31u))) >> 7u;
    goto L_10079a92;
L_10079aea: ;
    g->edx = edx;
    return edi;
L_10079af0: ;
    g->edx = edx;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10079a00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10079a00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
