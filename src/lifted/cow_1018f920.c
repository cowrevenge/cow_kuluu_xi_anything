/* f_0x1018f920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_1018f920(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg4 <= 0)
    {
        edi = 0u;
        loc_4 = 0u;
    }
    else
    {
        eax = arg4;
        ecx = 0u;
        esi = 0u;
        edi = 0u;
        loc_4 = 0u;
L_1018f949: ;
        if ((int32_t)ecx >= (int32_t)arg5) goto L_1018f9e8;
        if ((int32_t)edi >= (int32_t)arg2) goto L_1018f9e8;
        if (rd8(arg3 + esi) < 0x80u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg3 + esi);
            goto L_1018f96a;
        }
        eax = (eax & 0xffffff00u) | rd8(arg3 + esi);
        if ((uint8_t)eax <= 0x9fu) goto L_1018f976;
L_1018f96a: ;
        if ((uint8_t)eax < 0xe0u) goto L_1018f972;
        if ((uint8_t)eax <= 0xffu) goto L_1018f976;
L_1018f972: ;
        if ((uint8_t)eax != 0x7fu) goto L_1018f99a;
L_1018f976: ;
        if ((int32_t)(ecx + 0xeu) > (int32_t)arg5) goto L_1018f9e8;
        ecx = ecx + 0xeu;
        wr8(arg1 + edi, (uint8_t)eax);
        t1 = rd8(arg3 + esi + 1u);
        wr8(arg1 + edi + 1u, (uint8_t)t1);
        if (rd8(arg3 + esi + 2u) == 0x7fu)
        {
            eax = (eax & 0xffffff00u) | t1;
            esi = esi + 2u;
            edi = edi + 2u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | t1;
            esi = esi + 2u;
            edi = edi + 2u;
            loc_4 = ecx;
        }
L_1018f9de: ;
        if ((int32_t)esi < (int32_t)arg4) goto L_1018f945;
    }
L_1018f9e8: ;
    wr8(arg1 + edi, 0u);
    return edi;
L_1018f945: ;
    ecx = loc_4;
    goto L_1018f949;
L_1018f99a: ;
    if ((uint8_t)eax != 6u) goto L_1018f9a3;
    wr8(arg1 + edi, (uint8_t)eax);
L_1018f9dc: ;
    esi = esi + 1u;
    edi = edi + 1u;
    goto L_1018f9de;
L_1018f9a3: ;
    t2 = (ecx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)eax;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t3 = cow_cdecl(g, COW_IMG(0x1011cec0u), 1, t2);
    if ((int32_t)(loc_4 + t3) > (int32_t)arg5) goto L_1018f9e8;
    eax = loc_4 + t3;
    edx = loc_4;
    t4 = rd8(arg3 + esi);
    wr8(arg1 + edi, (uint8_t)t4);
    t5 = (eax & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)rd8(arg3 + esi);
    g->eax = t5;
    g->esp = sp0 - 0x14u;
    t6 = cow_cdecl(g, COW_IMG(0x1011cec0u), 1, t5);
    eax = t6;
    loc_4 = loc_4 + t6;
    goto L_1018f9dc;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018f920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018f920(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
