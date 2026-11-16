/* f_0x100fe030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_100fe030(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 4u);
    t2 = rd32(sp0 + 8u);
    wr8(sp0 + 4u, 0u);
    if ((uint16_t)arg3 == 0u)
    {
        eax = in_eax & 0xffffff00u;
        edx = in_edx & 0xffffff00u;
        ebx = in_ebx & 0xffffff00u;
        esi = arg3;
        edi = t2;
    }
    else
    {
        ebp = t1;
        edi = t2;
        eax = in_eax & 0xffffff00u;
        ecx = 0u;
        edx = in_edx & 0xffffff00u;
        ebx = in_ebx & 0xffffff00u;
        esi = arg3;
L_100fe05f: ;
        if ((uint16_t)ecx != 0u) goto L_100fe0ac;
        if (rd8(ebp) < 0x30u)
        {
            eax = (eax & 0xffffff00u) | rd8(ebp);
            goto L_100fe073;
        }
        eax = (eax & 0xffffff00u) | rd8(ebp);
        if ((uint8_t)eax > 0x39u) goto L_100fe073;
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax - 0x2fu);
L_100fe08d: ;
        wr8(sp0 + 4u, (uint8_t)eax);
        if ((uint8_t)eax == 0u) goto L_100fe0d7;
        ebp = ebp + 1u;
        if ((uint16_t)esi <= 1u) goto L_100fe0d7;
        if ((uint16_t)esi != 2u)
        {
            ecx = 6u;
            goto L_100fe0ac;
        }
        if ((uint8_t)ebx > 4u) goto L_100fe0d7;
        ecx = 6u;
L_100fe0ac: ;
        wr32(sp0 + 8u, ecx + 0xffffu);
        if ((uint8_t)((uint8_t)ebx + 1u) < 8u)
        {
            edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u | (((ecx + 0xffffu & 0x1fu) != 0u ? (uint8_t)eax >> (ecx + 0xffffu & 0x1fu) : (uint8_t)eax) & 1u));
            eax = (eax & 0xffffff00u) | (((ecx + 0xffffu & 0x1fu) != 0u ? (uint8_t)eax >> (ecx + 0xffffu & 0x1fu) : (uint8_t)eax) & 1u);
            ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx + 1u);
        }
        else
        {
            edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u | (((ecx + 0xffffu & 0x1fu) != 0u ? (uint8_t)eax >> (ecx + 0xffffu & 0x1fu) : (uint8_t)eax) & 1u));
            eax = (eax & 0xffffff00u) | (((ecx + 0xffffu & 0x1fu) != 0u ? (uint8_t)eax >> (ecx + 0xffffu & 0x1fu) : (uint8_t)eax) & 1u);
            ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx + 1u);
            wr8(edi, (uint8_t)edx);
            edx = edx & 0xffffff00u;
            ebx = ebx & 0xffffff00u;
            esi = esi + 0xffffu;
            edi = edi + 1u;
        }
        if ((uint16_t)esi != 0u) goto L_100fe057;
    }
L_100fe0d7: ;
    if ((uint16_t)esi == 0u)
    {
        ecx = 6u;
        goto L_100fe117;
    }
    ecx = 6u;
L_100fe0e1: ;
    if ((uint16_t)ecx == 0u) goto L_100fe117;
    wr32(sp0 + 8u, ecx + 0xffffu);
    if ((uint8_t)((uint8_t)ebx + 1u) < 8u)
    {
        eax = (eax & 0xffffff00u) | (((ecx + 0xffffu & 0x1fu) != 0u ? 0u >> (ecx + 0xffffu & 0x1fu) : 0u) & 1u);
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u | (((ecx + 0xffffu & 0x1fu) != 0u ? 0u >> (ecx + 0xffffu & 0x1fu) : 0u) & 1u));
        ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx + 1u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | (((ecx + 0xffffu & 0x1fu) != 0u ? 0u >> (ecx + 0xffffu & 0x1fu) : 0u) & 1u);
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)edx * 2u | (((ecx + 0xffffu & 0x1fu) != 0u ? 0u >> (ecx + 0xffffu & 0x1fu) : 0u) & 1u));
        ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx + 1u);
        wr8(edi, (uint8_t)edx);
        edx = edx & 0xffffff00u;
        ebx = ebx & 0xffffff00u;
        esi = esi + 0xffffu;
        edi = edi + 1u;
    }
    if ((uint16_t)esi != 0u)
    {
        ecx = rd32(sp0 + 8u);
        goto L_100fe0e1;
    }
    ecx = rd32(sp0 + 8u);
L_100fe117: ;
    if ((uint8_t)ebx != 0u)
    {
        if ((uint16_t)esi != 0u)
        {
            if ((uint8_t)ebx < 8u)
            {
                eax = (eax & 0xffffff00u) | (((ecx & 0x1fu) != 0u ? 0u >> (ecx & 0x1fu) : 0u) & 1u);
                ecx = (uint8_t)(8u - (uint8_t)ebx);
L_100fe135: ;
                if (ecx != 1u)
                {
                    ecx = ecx - 1u;
                    edx = (edx & 0xffffff00u) | (uint8_t)(edx | eax);
                    goto L_100fe135;
                }
                ecx = ecx - 1u;
                edx = (edx & 0xffffff00u) | (uint8_t)(edx | eax);
            }
            wr8(edi, (uint8_t)edx);
            ebx = ebx & 0xffffff00u;
        }
    }
    g->edx = edx;
    return -(0u < (uint8_t)ebx) + 1u;
L_100fe057: ;
    eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
    ecx = rd32(sp0 + 8u);
    goto L_100fe05f;
L_100fe073: ;
    if ((uint8_t)eax < 0x41u) goto L_100fe07f;
    if ((uint8_t)eax > 0x5au) goto L_100fe07f;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax - 0x36u);
    goto L_100fe08d;
L_100fe07f: ;
    if ((uint8_t)eax < 0x61u) goto L_100fe08b;
    if ((uint8_t)eax > 0x7au) goto L_100fe08b;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax - 0x3cu);
    goto L_100fe08d;
L_100fe08b: ;
    eax = eax & 0xffffff00u;
    goto L_100fe08d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fe030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fe030(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
