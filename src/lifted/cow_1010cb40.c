/* f_0x1010cb40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1010cb40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(arg1 + 0x8dcu) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg1 + 0x8dcu);
        ecx = rd32(arg1 + 0x804u);
        edx = arg1 + 4u;
        loc_8 = arg1 + 4u;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg1 + 0x8dcu);
        ecx = rd32(arg1 + 0x804u);
        if (rd8(arg1 + 4u) != 0xau)
        {
            edx = arg1 + 4u;
            loc_8 = arg1 + 4u;
        }
        else
        {
            wr8(arg1 + 0x8dcu, 0u);
            ecx = ecx - 1u;
            edx = arg1 + 5u;
            loc_8 = arg1 + 5u;
        }
    }
    if ((int32_t)ecx <= 0) goto L_1010cbab;
L_1010cb86: ;
    if ((int32_t)ecx <= 0) goto L_1010cb9e;
    esi = edx;
    edi = ecx;
L_1010cb8e: ;
    if (rd8(esi) == 0xdu) goto L_1010cbc8;
    eax = (eax & 0xffffff00u) | rd8(esi);
    if ((uint8_t)eax == 0xau) goto L_1010cbc8;
    if ((int32_t)(edi - 1u) > 0)
    {
        esi = esi + 1u;
        edi = edi - 1u;
        goto L_1010cb8e;
    }
L_1010cb9e: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t5 = cow_thiscall(g, COW_IMG(0x10109340u), arg1 + 0x8e0u, 2, edx, ecx);
    t6 = g->edx;
    eax = t5;
    edx = t6;
L_1010cbab: ;
    wr32(arg1 + 0x804u, 0u);
    wr16(arg1 + 0x818u, 2u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1010cbc8: ;
    if (rd8(esi) == 0xdu)
    {
        if ((int32_t)edi <= 1) goto L_1010cbdf;
        if (rd8(esi + 1u) != 0xau) goto L_1010cbdf;
        wr8(esi, 0u);
        esi = esi + 1u;
        edi = edi - 1u;
    }
L_1010cbe6: ;
    wr8(esi, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x101093b0u), arg1 + 0x8e0u, 1, loc_8);
    t1 = g->edx;
    wr16(arg1 + 0x8deu, (uint16_t)(rd16(arg1 + 0x8deu) + 1u));
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x1010cc40u), arg1, 1, arg1 + 0x8e0u);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_1010cc32;
    }
    eax = t2;
    edx = t3;
    edi = edi - 1u;
    loc_8 = esi + 1u;
    esi = esi + 1u;
    g->esp = sp0 - 0x18u;
    t4 = cow_call_regs(g, COW_IMG(0x101094d0u), eax, arg1 + 0x8e0u, g->edx, 0, 1, 0u);
    if ((int32_t)edi <= 0)
    {
        ecx = edi;
        edx = esi;
        goto L_1010cb9e;
    }
    eax = t4;
    ecx = edi;
    edx = esi;
    goto L_1010cb86;
L_1010cbdf: ;
    wr8(arg1 + 0x8dcu, 1u);
    goto L_1010cbe6;
L_1010cc32: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010cb40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010cb40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
