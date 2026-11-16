/* f_0x1031894e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1031894e(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(arg2) == 0x61u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg2);
        esi = rd32(COW_IMG(0x109b2a40u));
        goto L_10318987;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg2);
    esi = rd32(COW_IMG(0x109b2a40u));
    if ((uint8_t)eax == 0x72u) goto L_10318980;
    if ((uint8_t)eax != 0x77u)
    {
        edx = in_edx;
        goto L_10318a9b;
    }
    ecx = 0x301u;
L_1031898c: ;
    esi = esi | 2u;
L_1031898f: ;
    edx = 1u;
    edi = arg2;
    loc_8 = 0u;
    loc_c = 0u;
L_10318992: ;
    if (rd8(edi + 1u) == 0u) goto L_10318a81;
    eax = (eax & 0xffffff00u) | rd8(edi + 1u);
    edi = edi + 1u;
    if (edx == 0u) goto L_10318a81;
    if ((int8_t)eax > 84)
    {
        eax = (uint32_t)(int8_t)eax;
        goto L_10318a20;
    }
    zf = (uint32_t)(int8_t)eax == 0x54u;
    eax = (uint32_t)(int8_t)eax;
    if (zf) goto L_10318a10;
    if (eax == 0x2bu)
    {
        eax = eax - 0x2bu;
        goto L_103189fa;
    }
    eax = eax - 0x2bu;
    if (eax == 0x19u)
    {
        eax = eax - 0x19u;
        goto L_103189f0;
    }
    eax = eax - 0x19u;
    if (eax == 0xeu)
    {
        eax = eax - 0xeu;
        goto L_103189db;
    }
    eax = eax - 0xeu;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_10318a72;
    }
    eax = eax - 1u;
    if (loc_8 != 0u) goto L_10318a72;
    ecx = ecx | 0x20u;
    loc_8 = 1u;
    goto L_10318992;
L_10318980: ;
    ecx = 0u;
    esi = esi | 1u;
    goto L_1031898f;
L_10318987: ;
    ecx = 0x109u;
    goto L_1031898c;
L_103189db: ;
    if (loc_8 != 0u) goto L_10318a72;
    ecx = ecx | 0x10u;
    loc_8 = 1u;
    goto L_10318992;
L_103189f0: ;
    if ((ecx & 0x40u) != 0u) goto L_10318a72;
    ecx = ecx | 0x40u;
    goto L_10318992;
L_103189fa: ;
    if ((ecx & 2u) != 0u) goto L_10318a72;
    ecx = (ecx & 0xfffffffeu) | 2u;
    esi = (esi & 0xfffffffcu) | 0x80u;
    goto L_10318992;
L_10318a10: ;
    if ((ecx & 0x1000u) != 0u)
    {
        eax = 0x1000u;
        goto L_10318a72;
    }
    eax = 0x1000u;
    ecx = ecx | 0x1000u;
    goto L_10318992;
L_10318a20: ;
    if (eax == 0x62u)
    {
        eax = eax - 0x62u;
        goto L_10318a6d;
    }
    eax = eax - 0x62u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10318a56;
    }
    eax = eax - 1u;
    if (eax == 0xbu)
    {
        eax = eax - 0xbu;
        goto L_10318a3f;
    }
    eax = eax - 0xbu;
    if (eax != 6u)
    {
        eax = eax - 6u;
        goto L_10318a72;
    }
    eax = eax - 6u;
    if ((ecx >> 8u & 0xc0u) != 0u) goto L_10318a72;
    ecx = (ecx & 0xffff00ffu) | (uint8_t)(ecx >> 8u | 0x40u) << 8u;
    goto L_10318992;
L_10318a3f: ;
    if (loc_c != 0u) goto L_10318a72;
    esi = esi & 0xffffbfffu;
    loc_c = 1u;
    goto L_10318992;
L_10318a56: ;
    if (loc_c != 0u) goto L_10318a72;
    esi = esi | 0x4000u;
    loc_c = 1u;
    goto L_10318992;
L_10318a6d: ;
    if ((ecx >> 8u & 0xc0u) == 0u) goto L_10318a79;
L_10318a72: ;
    edx = 0u;
    goto L_10318992;
L_10318a79: ;
    ecx = (ecx & 0xffff00ffu) | (uint8_t)(ecx >> 8u | 0x80u) << 8u;
    goto L_10318992;
L_10318a81: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_cdecl(g, COW_IMG(0x10315ed6u), 4, arg1, ecx, arg3, 0x1a4u);
    t2 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        ecx = t1;
        edx = t2;
        goto L_10318a9f;
    }
    edx = t2;
L_10318a9b: ;
    eax = 0u;
L_10318ab9: ;
    g->edx = edx;
    return eax;
L_10318a9f: ;
    wr32(COW_IMG(0x109b271cu), rd32(COW_IMG(0x109b271cu)) + 1u);
    wr32(arg4 + 0xcu, esi);
    wr32(arg4 + 4u, 0u);
    wr32(arg4, 0u);
    wr32(arg4 + 8u, 0u);
    wr32(arg4 + 0x1cu, 0u);
    wr32(arg4 + 0x10u, ecx);
    eax = arg4;
    goto L_10318ab9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031894e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031894e(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
