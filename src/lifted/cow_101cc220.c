/* f_0x101cc220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101cc220(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        goto L_101cc318;
    }
    if (rd16(COW_IMG(0x10485f7au)) == 0u)
    {
        eax = (in_eax & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
        goto L_101cc318;
    }
    eax = (in_eax & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u) == 0u)
    {
        eax = (uint32_t)(int16_t)eax;
        goto L_101cc318;
    }
    edi = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u);
    if ((rd32(edi + 0x1d0u) & 0x400u) == 0u) goto L_101cc2c9;
    ecx = rd32(edi + 0x1d0u);
    if ((rd32(arg1 + 0x1d0u) & 0x400u) == 0u) goto L_101cc2c9;
    if (rd8(edi + 0x1ffu) == 0x28u)
    {
        eax = rd8(edi + 0x1ffu) | 0x400u;
        goto L_101cc274;
    }
    eax = rd8(edi + 0x1ffu) | 0x400u;
    if ((uint8_t)eax != 0x2au) goto L_101cc28c;
L_101cc274: ;
    if (rd8(arg1 + 0x1ffu) == 0x28u) goto L_101cc318;
    ecx = (ecx & 0xffffff00u) | rd8(arg1 + 0x1ffu);
    if ((uint8_t)ecx == 0x2au) goto L_101cc318;
L_101cc28c: ;
    if ((uint8_t)eax == 0x29u) goto L_101cc294;
    if ((uint8_t)eax != 0x2bu) goto L_101cc2a4;
L_101cc294: ;
    if (rd8(arg1 + 0x1ffu) == 0x29u) goto L_101cc318;
    ecx = (ecx & 0xffffff00u) | rd8(arg1 + 0x1ffu);
    if ((uint8_t)ecx == 0x2bu) goto L_101cc318;
L_101cc2a4: ;
    if ((uint8_t)eax < 0x63u) goto L_101cc2bc;
    cf = (uint8_t)eax < 0x63u;
    zf = (uint8_t)((uint8_t)eax - 0x63u) == 0u;
    if (!cf && !zf) goto L_101cc2bc;
    if (rd8(arg1 + 0x1ffu) < 0x63u) goto L_101cc2bc;
    cf = rd8(arg1 + 0x1ffu) < 0x63u;
    zf = (uint8_t)(rd8(arg1 + 0x1ffu) - 0x63u) == 0u;
    if (!cf && !zf) goto L_101cc2bc;
    return (eax & 0xffffff00u) | 1u;
L_101cc2bc: ;
    if ((uint8_t)eax == rd8(arg1 + 0x1ffu)) goto L_101cc2c9;
    return (eax & 0xffffff00u) | 1u;
L_101cc2c9: ;
    if (rd32(arg1 + 0x1d0u) >> 8u & 1u)
    {
        eax = rd32(arg1 + 0x1d0u);
        goto L_101cc318;
    }
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x1008e150u), arg1, 0);
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        goto L_101cc318;
    }
    eax = t1;
    if (!(rd32(arg1 + 0x120u) >> 0xdu & 1u)) goto L_101cc2f2;
    return (eax & 0xffffff00u) | 1u;
L_101cc2f2: ;
    if (!(rd32(arg1 + 0x12cu) >> 0xdu & 1u)) goto L_101cc305;
    return (eax & 0xffffff00u) | 1u;
L_101cc305: ;
    if (arg1 == edi) goto L_101cc318;
    if (rd16(arg1 + 0x210u) == 0u) goto L_101cc318;
    return (eax & 0xffffff00u) | 1u;
L_101cc318: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cc220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cc220(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
