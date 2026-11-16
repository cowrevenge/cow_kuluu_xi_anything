/* f_0x1031ce23 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1031ce23(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_34;
    uint32_t loc_8;
    uint32_t loc_c;
    const uint32_t sp0 = g->esp;

    edx = COW_IMG(0x103d09b8u);
    loc_20 = 0u;
    loc_24 = COW_IMG(0x103d09b8u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_c = rd32(sp0 - 0xcu);
    loc_14 = rd32(sp0 - 0x14u);
    loc_8 = rd32(sp0 - 8u);
L_1031ce38: ;
    if (rd32(COW_IMG(0x103d29d8u)) == edx)
    {
        loc_20 = loc_20 + 1u;
    }
    if (rd32(edx + 0x10u) == 0xffffffffu) goto L_1031cf3b;
    ecx = rd32(edx + 0x10u);
    eax = edx + 0x18u;
    ebx = ecx;
    edi = ecx + 8u;
    loc_1c = 0u;
    loc_10 = 0u;
    loc_18 = edx + 0x18u;
L_1031ce62: ;
    if (rd32(eax) != 0xffffffffu) goto L_1031ce7e;
    if (loc_10 != 0u) goto L_1031ce76;
    if (rd32(edx + 0xcu) != eax) goto L_1031cf4d;
L_1031ce76: ;
    loc_10 = loc_10 + 1u;
L_1031cf1c: ;
    if ((int32_t)(loc_1c + 1u) < 1024)
    {
        ebx = ebx + 0x1000u;
        edi = edi + 0x1000u;
        loc_1c = loc_1c + 1u;
        loc_18 = eax + 8u;
        eax = eax + 8u;
        goto L_1031ce62;
    }
    loc_1c = loc_1c + 1u;
L_1031cf3b: ;
    if (rd32(edx) == COW_IMG(0x103d09b8u))
    {
        edx = rd32(edx);
        goto L_1031cf6f;
    }
    loc_24 = rd32(edx);
    edx = rd32(edx);
    goto L_1031ce38;
L_1031ce7e: ;
    if (rd32(ebx) >= edi + 0xf0u) goto L_1031cf52;
    ecx = edi + 0xf0u;
    if (rd8(ecx) != 0xffu) goto L_1031cf57;
    ecx = 0u;
    loc_c = 0u;
    loc_14 = 0u;
    loc_8 = 0u;
L_1031cea2: ;
    if (ecx + edi != rd32(ebx))
    {
        esi = ecx + edi;
    }
    else
    {
        esi = ecx + edi;
        eax = loc_18;
        loc_c = loc_c + 1u;
    }
    if (rd8(esi) != 0u) goto L_1031cebd;
    ecx = ecx + 1u;
    loc_14 = loc_14 + 1u;
    loc_8 = loc_8 + 1u;
L_1031cf07: ;
    if ((int32_t)ecx < 240) goto L_1031cea2;
    if (loc_14 != rd32(eax)) goto L_1031cf67;
    if (loc_c == 0u) goto L_1031cf6b;
    goto L_1031cf1c;
L_1031cebd: ;
    if ((int32_t)loc_8 >= (int32_t)rd32(eax + 4u))
    {
        edx = loc_8;
        goto L_1031cf5b;
    }
    edx = loc_8;
    if (loc_c != 1u) goto L_1031cee4;
    if ((int32_t)edx < (int32_t)rd32(edi - 4u)) goto L_1031cf5f;
    eax = loc_18;
    loc_c = 2u;
L_1031cee4: ;
    edx = ecx + 1u;
    esi = rd8(esi);
L_1031ceee: ;
    if ((int32_t)edx >= (int32_t)(ecx + esi)) goto L_1031cf02;
    if (rd8(edi + edx) != 0u) goto L_1031cf63;
    edx = edx + 1u;
    esi = rd8(ebx + ecx + 8u);
    goto L_1031ceee;
L_1031cf02: ;
    ecx = edx;
    edx = loc_24;
    loc_8 = 0u;
    goto L_1031cf07;
L_1031cf4d: ;
    eax = 0xffffffffu;
L_1031cf7c: ;
    g->edx = edx;
    return eax;
L_1031cf52: ;
    loc_34 = 0xfffffffeu;
L_1031cf54: ;
    eax = loc_34;
    goto L_1031cf7c;
L_1031cf57: ;
    loc_34 = 0xfffffffdu;
    goto L_1031cf54;
L_1031cf5b: ;
    loc_34 = 0xfffffffcu;
    goto L_1031cf54;
L_1031cf5f: ;
    loc_34 = 0xfffffffbu;
    goto L_1031cf54;
L_1031cf63: ;
    loc_34 = 0xfffffffau;
    goto L_1031cf54;
L_1031cf67: ;
    loc_34 = 0xfffffff9u;
    goto L_1031cf54;
L_1031cf6b: ;
    loc_34 = 0xfffffff8u;
    goto L_1031cf54;
L_1031cf6f: ;
    eax = (-(loc_20 != 0u) & 9u) - 9u;
    goto L_1031cf7c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031ce23(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031ce23(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
