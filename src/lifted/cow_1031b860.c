/* f_0x1031b860 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Manages a bitmap allocator block, freeing or reallocating memory based on reference counts and bitmaps, potentially triggering VirtualFree/HeapFree when empty.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_1031b860(Guest* g, uint32_t param1, uint32_t param2)
{
    uint32_t eax = g->eax;
    uint32_t edx = g->edx;

    /* 1031b86e: mov eax, dword ptr [ecx + 0x10] */
    eax = rd32(param1 + 0x10u);
    
    /* 1031b872: mov edi, esi (esi is param2) */
    uint32_t edi = param2;
    
    /* 1031b874: add esi, -4 */
    uint32_t esi = param2 - 4u;
    
    /* 1031b877: sub edi, dword ptr [ecx + 0xc] */
    edi = edi - rd32(param1 + 0xcu);
    
    /* 1031b87a: shr edi, 0xf */
    edi = edi >> 15;
    
    /* 1031b87d-1031b88c: compute piVar3 (base of block list) */
    uint32_t ecx_tmp = edi * 0x204u;
    uint32_t piVar3 = ecx_tmp + eax + 0x144u;
    
    /* 1031b88f: mov ecx, dword ptr [esi] */
    uint32_t ecx_val = rd32(esi);
    
    /* 1031b891: dec ecx */
    ecx_val = ecx_val - 1u;
    
    /* 1031b892: test cl, 1 */
    if ((ecx_val & 1u) != 0u) {
        goto Lbb84;
    }
    
    /* 1031b89e: mov edx, dword ptr [ecx + esi] */
    uint32_t uVar6 = rd32(ecx_val + esi);
    
    /* 1031b8a1: lea ebx, [ecx + esi] */
    uint32_t ebx = ecx_val + esi;
    
    /* 1031b8a7: mov edx, dword ptr [esi - 4] */
    uint32_t uVar7 = rd32(esi - 4u);
    
    /* 1031b8b0: test dl, 1 */
    if ((uVar6 & 1u) != 0u) {
        goto L936;
    }
    
    /* 1031b8b8: sar edx, 4 */
    uint32_t uVar9 = (uint32_t)((int32_t)uVar6 >> 4);
    
    /* 1031b8bb: dec edx */
    uVar9 = uVar9 - 1u;
    
    /* 1031b8bc: cmp edx, 0x3f ; jbe ... */
    if (uVar9 > 0x3fu) {
        uVar9 = 0x3fu;
    }
    
    /* 1031b8c4: mov ecx, dword ptr [ebx + 4] */
    uint32_t ecx_chk = rd32(ebx + 4u);
    
    /* 1031b8c7: cmp ecx, dword ptr [ebx + 8] ; jne ... */
    if (ecx_chk != rd32(ebx + 8u)) {
        goto L918;
    }
    
    /* 1031b8cc: cmp edx, 0x20 ; jae ... */
    if (uVar9 >= 0x20u) {
        /* 1031b8ef */
        uint32_t shift_amt = uVar9 - 0x20u;
        uint32_t mask = ~(0x80000000u >> (shift_amt & 0x1fu));
        
        /* 1031b8ff: and dword ptr [eax + edi*4 + 0xc4], ebx */
        uint32_t addr_c4 = eax + edi * 4u + 0xc4u;
        wr32(addr_c4, rd32(addr_c4) & mask);
        
        /* 1031b906: dec byte ptr [ecx] where ecx = edx + eax + 4 */
        uint32_t addr_byte = uVar9 + eax + 4u;
        uint8_t b_val = rd8(addr_byte) - 1u;
        wr8(addr_byte, b_val);
        
        if (b_val != 0u) {
            goto L910;
        }
        
        /* 1031b90a: mov ecx, dword ptr [ebp + 8] ; and dword ptr [ecx + 4], ebx */
        wr32(param1 + 4u, rd32(param1 + 4u) & mask);
    } else {
        /* 1031b8d1 */
        uint32_t mask = ~(0x80000000u >> (uVar9 & 0x1fu));
        
        /* 1031b8e0: and dword ptr [eax + edi*4 + 0x44], ebx */
        uint32_t addr_44 = eax + edi * 4u + 0x44u;
        wr32(addr_44, rd32(addr_44) & mask);
        
        /* 1031b8e4: dec byte ptr [ecx] where ecx = edx + eax + 4 */
        uint32_t addr_byte = uVar9 + eax + 4u;
        uint8_t b_val = rd8(addr_byte) - 1u;
        wr8(addr_byte, b_val);
        
        if (b_val != 0u) {
            goto L910;
        }
        
        /* 1031b8e8: mov ecx, dword ptr [ebp + 8] ; and dword ptr [ecx], ebx */
        wr32(param1, rd32(param1) & mask);
    }
    
L910:
    /* 1031b910: mov ecx, dword ptr [ebp - 4] (local_8) */
    ecx_val = ecx_val; 
    /* 1031b913: mov ebx, dword ptr [ebp + 0xc] (ebx from earlier) */
    /* 1031b916: jmp 0x1031b91b */
    
L918:
    /* 1031b91b: mov edx, dword ptr [ebx + 8] */
    uint32_t edx_tmp = rd32(ebx + 8u);
    
    /* 1031b91e: mov ebx, dword ptr [ebx + 4] */
    ebx = rd32(ebx + 4u);
    
    /* 1031b921: add ecx, dword ptr [ebp - 0xc] (uVar6) */
    ecx_val = ecx_val + uVar6;
    
    /* 1031b924: mov dword ptr [edx + 4], ebx */
    wr32(edx_tmp + 4u, ebx);
    
    /* 1031b927: mov edx, dword ptr [ebp + 0xc] (ebx from earlier) */
    edx_tmp = ebx; // Wait, [ebp+0xc] was set to ebx at 1031b8b3. 
                   // At 1031b913 we loaded it into ebx. So edx_tmp is the original ebx value.
    
    /* 1031b92a: mov dword ptr [ebp - 4], ecx */
    /* local_8 = ecx_val */
    
    /* 1031b92d: mov ebx, dword ptr [edx + 4] */
    ebx = rd32(edx_tmp + 4u);
    
    /* 1031b930: mov edx, dword ptr [edx + 8] */
    edx_tmp = rd32(edx_tmp + 8u);
    
    /* 1031b933: mov dword ptr [ebx + 8], edx */
    wr32(ebx + 8u, edx_tmp);

L936:
    /* 1031b936: mov edx, ecx */
    uint32_t uVar10 = ecx_val;
    
    /* 1031b938: sar edx, 4 */
    uVar10 = (uint32_t)((int32_t)uVar10 >> 4);
    
    /* 1031b93b: dec edx */
    uVar10 = uVar10 - 1u;
    
    /* 1031b93c: cmp edx, 0x3f ; jbe ... */
    if (uVar10 > 0x3fu) {
        uVar10 = 0x3fu;
    }
    
    /* 1031b944: mov ebx, dword ptr [ebp - 8] (uVar7) */
    uint32_t ebx_flag = uVar7 & 1u;
    
    /* 1031b94a: mov dword ptr [ebp - 0xc], ebx */
    /* local_8_check = ebx_flag */
    
    if (ebx_flag != 0u) {
        goto L9e7;
    }
    
    /* 1031b953: sub esi, dword ptr [ebp - 8] (uVar7) */
    esi = esi - uVar7;
    
    /* 1031b956: mov ebx, dword ptr [ebp - 8] (uVar7) */
    uint32_t ebx_shift = uVar7;
    
    /* 1031b959: sar ebx, 4 */
    ebx_shift = (uint32_t)((int32_t)ebx_shift >> 4);
    
    /* 1031b961: dec ebx */
    ebx_shift = ebx_shift - 1u;
    
    /* 1031b962: pop esi -> esi = 0x3f */
    uint32_t limit_3f = 0x3fu;
    
    /* 1031b963: cmp ebx, esi ; jbe ... */
    if (ebx_shift > limit_3f) {
        ebx_shift = limit_3f;
    }
    
    /* 1031b969: add ecx, dword ptr [ebp - 8] (uVar7) */
    ecx_val = ecx_val + uVar7;
    
    /* 1031b96c: mov edx, ecx */
    uint32_t edx_shift = ecx_val;
    
    /* 1031b971: sar edx, 4 */
    edx_shift = (uint32_t)((int32_t)edx_shift >> 4);
    
    /* 1031b974: dec edx */
    edx_shift = edx_shift - 1u;
    
    /* 1031b975: cmp edx, esi ; jbe ... */
    if (edx_shift > limit_3f) {
        edx_shift = limit_3f;
    }
    
    /* 1031b97b: cmp ebx, edx ; je ... */
    if (ebx_shift == edx_shift) {
        goto L9e2;
    }
    
    /* 1031b97f: mov ecx, dword ptr [ebp + 0xc] (esi from earlier? No, [ebp+0xc] was ebx at 1031b8b3. 
       But wait, at 1031b95e `mov dword ptr [ebp + 0xc], esi` happened in the previous block? 
       Let's re-read carefully.
       
       At 1031b8b3: mov [ebp+0xc], ebx (where ebx = ecx_val + esi_orig)
       
       In the path where uVar7&1 == 0 (which we are in):
       1031b95e: mov dword ptr [ebp + 0xc], esi 
       Here `esi` is the value after `sub esi, uVar7`. So [ebp+0xc] is updated to this new esi.
       
       So at 1031b97f, ecx = [ebp+0xc] = current esi.
    */
    uint32_t puVar12_cur = esi; // This is the value stored in [ebp+0xc]
    
    /* 1031b982: mov esi, dword ptr [ecx + 4] */
    uint32_t esi_next = rd32(puVar12_cur + 4u);
    
    /* 1031b985: cmp esi, dword ptr [ecx + 8] ; jne ... */
    if (esi_next != rd32(puVar12_cur + 8u)) {
        goto L9ca;
    }
    
    /* 1031b98a: cmp ebx, 0x20 ; jae ... */
    if (ebx_shift >= 0x20u) {
        uint32_t shift_amt = ebx_shift - 0x20u;
        uint32_t mask = ~(0x80000000u >> (shift_amt & 0x1fu));
        
        /* 1031b9b7: and dword ptr [eax + edi*4 + 0xc4], esi */
        uint32_t addr_c4 = eax + edi * 4u + 0xc4u;
        wr32(addr_c4, rd32(addr_c4) & mask);
        
        /* 1031b9be: dec byte ptr [ebx + eax + 4] */
        uint32_t addr_byte = ebx_shift + eax + 4u;
        uint8_t b_val = rd8(addr_byte) - 1u;
        wr8(addr_byte, b_val);
        
        if (b_val != 0u) {
            goto L9ca;
        }
        
        /* 1031b9c4: mov ecx, [ebp+8] ; and [ecx+4], esi */
        wr32(param1 + 4u, rd32(param1 + 4u) & mask);
    } else {
        uint32_t mask = ~(0x80000000u >> (ebx_shift & 0x1fu));
        
        /* 1031b99a: and dword ptr [eax + edi*4 + 0x44], esi */
        uint32_t addr_44 = eax + edi * 4u + 0x44u;
        wr32(addr_44, rd32(addr_44) & mask);
        
        /* 1031b99e: dec byte ptr [ebx + eax + 4] */
        uint32_t addr_byte = ebx_shift + eax + 4u;
        uint8_t b_val = rd8(addr_byte) - 1u;
        wr8(addr_byte, b_val);
        
        if (b_val != 0u) {
            goto L9ca;
        }
        
        /* 1031b9a4: mov ecx, [ebp+8] ; and [ecx], esi */
        wr32(param1, rd32(param1) & mask);
    }

L9ca:
    /* 1031b9ca: mov ecx, dword ptr [ebp + 0xc] (puVar12_cur) */
    puVar12_cur = esi; // Still the same
    
    /* 1031b9cd: mov esi, dword ptr [ecx + 8] */
    uint32_t prev_node = rd32(puVar12_cur + 8u);
    
    /* 1031b9d0: mov ecx, dword ptr [ecx + 4] */
    uint32_t next_node = rd32(puVar12_cur + 4u);
    
    /* 1031b9d3: mov dword ptr [esi + 4], ecx */
    wr32(prev_node + 4u, next_node);
    
    /* 1031b9d6: mov ecx, dword ptr [ebp + 0xc] */
    puVar12_cur = esi;
    
    /* 1031b9d9: mov esi, dword ptr [ecx + 4] */
    next_node = rd32(puVar12_cur + 4u);
    
    /* 1031b9dc: mov ecx, dword ptr [ecx + 8] */
    prev_node = rd32(puVar12_cur + 8u);
    
    /* 1031b9df: mov dword ptr [esi + 8], ecx */
    wr32(next_node + 8u, prev_node);

L9e2:
    /* 1031b9e2: mov esi, dword ptr [ebp + 0xc] */
    puVar12_cur = esi;
    
    /* 1031b9e5: jmp 0x1031b9ea */
    goto L9ea;

L9e7:
    /* 1031b9e7: mov ebx, dword ptr [ebp + 8] (param1) */
    uint32_t puVar11 = param1;

L9ea:
    /* 1031b9ea: cmp dword ptr [ebp - 0xc], 0 ; jne ... */
    /* [ebp-0xc] was set to ebx_flag (uVar7 & 1) at 1031b94a */
    if (ebx_flag != 0u) {
        goto L9f8;
    }
    
    /* 1031b9f0: cmp ebx, edx ; je ... */
    /* ebx is puVar11 (param1), edx is uVar10 */
    if (puVar11 == uVar10) {
        goto Lba79;
    }

L9f8:
    /* 1031b9f8: mov ecx, dword ptr [ebp - 0x10] (piVar3) */
    uint32_t base = piVar3;
    
    /* 1031b9fb: mov ebx, dword ptr [ecx + edx*8 + 4] */
    uint32_t node_next = rd32(base + uVar10 * 8u + 4u);
    
    /* 1031b9ff: lea ecx, [ecx + edx*8] */
    uint32_t node_addr = base + uVar10 * 8u;
    
    /* 1031ba02: mov dword ptr [esi + 4], ebx */
    wr32(puVar12_cur + 4u, node_next);
    
    /* 1031ba05: mov dword ptr [esi + 8], ecx */
    wr32(puVar12_cur + 8u, node_addr);
    
    /* 1031ba08: mov dword ptr [ecx + 4], esi */
    wr32(node_addr + 4u, puVar12_cur);
    
    /* 1031ba0b: mov ecx, dword ptr [esi + 4] */
    uint32_t chk_next = rd32(puVar12_cur + 4u);
    
    /* 1031ba0e: mov dword ptr [ecx + 8], esi */
    wr32(chk_next + 8u, puVar12_cur);
    
    /* 1031ba11: mov ecx, dword ptr [esi + 4] */
    chk_next = rd32(puVar12_cur + 4u);
    
    /* 1031ba14: cmp ecx, dword ptr [esi + 8] ; jne ... */
    if (chk_next != rd32(puVar12_cur + 8u)) {
        goto Lba79;
    }
    
    /* 1031ba19: mov cl, byte ptr [edx + eax + 4] */
    uint8_t c_var = rd8(uVar10 + eax + 4u);
    
    /* 1031ba1d: cmp edx, 0x20 */
    int is_ge_32 = (uVar10 >= 0x20u);
    
    /* 1031ba20: mov byte ptr [ebp + 0xf], cl */
    uint8_t saved_c = c_var;
    
    /* 1031ba23: inc cl */
    c_var++;
    
    /* 1031ba25: mov byte ptr [edx + eax + 4], cl */
    wr8(uVar10 + eax + 4u, c_var);
    
    if (is_ge_32) {
        /* 1031ba50 path */
        if (saved_c == 0u) {
            uint32_t shift_amt = uVar10 - 0x20u;
            uint32_t mask = 0x80000000u >> (shift_amt & 0x1fu);
            
            /* 1031ba63: or dword ptr [ecx + 4], ebx */
            wr32(param1 + 4u, rd32(param1 + 4u) | mask);
        }
        
        uint32_t shift_amt = uVar10 - 0x20u;
        uint32_t mask = 0x80000000u >> (shift_amt & 0x1fu);
        
        /* 1031ba77: or dword ptr [eax], edx */
        uint32_t addr_c4 = eax + edi * 4u + 0xc4u;
        wr32(addr_c4, rd32(addr_c4) | mask);
    } else {
        /* 1031ba2b path */
        if (saved_c == 0u) {
            uint32_t mask = 0x80000000u >> (uVar10 & 0x1fu);
            
            /* 1031ba3d: or dword ptr [ecx], ebx */
            wr32(param1, rd32(param1) | mask);
        }
        
        uint32_t mask = 0x80000000u >> (uVar10 & 0x1fu);
        
        /* 1031ba4c: or dword ptr [eax], ebx */
        uint32_t addr_44 = eax + edi * 4u + 0x44u;
        wr32(addr_44, rd32(addr_44) | mask);
    }

Lba79:
    /* 1031ba79: mov eax, dword ptr [ebp - 4] (local_8 / ecx_val) */
    uint32_t local_8 = ecx_val;
    
    /* 1031ba7c: mov dword ptr [esi], eax */
    wr32(puVar12_cur, local_8);
    
    /* 1031ba7e: mov dword ptr [eax + esi - 4], eax */
    wr32(local_8 + puVar12_cur - 4u, local_8);
    
    /* 1031ba82: mov eax, dword ptr [ebp - 0x10] (piVar3) */
    uint32_t cnt = rd32(piVar3) - 1u;
    wr32(piVar3, cnt);
    
    if (cnt != 0u) {
        goto Lbb84;
    }
    
    /* 1031ba8d: mov eax, dword ptr [0x109f83f4] */
    uint32_t DAT_f4 = rd32(COW_IMG(0x109f83f4u));
    
    if (DAT_f4 == 0u) {
        goto Lbb76;
    }
    
    /* 1031ba9a: mov ecx, dword ptr [0x109f83e8] */
    uint32_t DAT_e8 = rd32(COW_IMG(0x109f83e8u));
    
    /* 1031baa0: mov esi, dword ptr [0x1032922c] */
    uint32_t esi_call = rd32(COW_IMG(0x1032922cu));
    
    /* 1031baa6: shl ecx, 0xf */
    DAT_e8 = DAT_e8 << 15;
    
    /* 1031baa9: add ecx, dword ptr [eax + 0xc] */
    uint32_t arg1_vf = DAT_e8 + rd32(DAT_f4 + 0xcu);
    
    /* 1031bab1-1031bab8: call esi (VirtualFree) */
    cow_stdcall(g, esi_call, 3, arg1_vf, 0x8000u, 0x4000u);
    
    /* 1031baba: mov ecx, dword ptr [0x109f83e8] */
    DAT_e8 = rd32(COW_IMG(0x109f83e8u));
    
    /* 1031bac0: mov eax, dword ptr [0x109f83f4] */
    DAT_f4 = rd32(COW_IMG(0x109f83f4u));
    
    /* 1031bac5: mov edx, 0x80000000 ; shr edx, cl */
    uint32_t mask_or = 0x80000000u >> (DAT_e8 & 0x1fu);
    
    /* 1031bacc: or dword ptr [eax + 8], edx */
    wr32(DAT_f4 + 8u, rd32(DAT_f4 + 8u) | mask_or);
    
    /* 1031bacf: mov eax, dword ptr [0x109f83f4] */
    DAT_f4 = rd32(COW_IMG(0x109f83f4u));
    
    /* 1031bad4: mov ecx, dword ptr [0x109f83e8] */
    DAT_e8 = rd32(COW_IMG(0x109f83e8u));
    
    /* 1031bada: mov eax, dword ptr [eax + 0x10] */
    uint32_t block_base = rd32(DAT_f4 + 0x10u);
    
    /* 1031badd: and dword ptr [eax + ecx*4 + 0xc4], 0 */
    wr32(block_base + DAT_e8 * 4u + 0xc4u, 0u);
    
    /* 1031bae5: mov eax, dword ptr [0x109f83f4] */
    DAT_f4 = rd32(COW_IMG(0x109f83f4u));
    
    /* 1031baea: mov eax, dword ptr [eax + 0x10] */
    block_base = rd32(DAT_f4 + 0x10u);
    
    /* 1031baed: dec byte ptr [eax + 0x43] */
    uint8_t b43 = rd8(block_base + 0x43u) - 1u;
    wr8(block_base + 0x43u, b43);
    
    /* 1031baf0: mov eax, dword ptr [0x109f83f4] */
    DAT_f4 = rd32(COW_IMG(0x109f83f4u));
    
    /* 1031baf5: mov ecx, dword ptr [eax + 0x10] */
    block_base = rd32(DAT_f4 + 0x10u);
    
    /* 1031baf8: cmp byte ptr [ecx + 0x43], 0 ; jne ... */
    if (rd8(block_base + 0x43u) != 0u) {
        goto Lbb07;
    }
    
    /* 1031bafe: and dword ptr [eax + 4], 0xfffffffe */
    wr32(DAT_f4 + 4u, rd32(DAT_f4 + 4u) & 0xfffffffeu);
    
Lbb07:
    /* 1031bb02: mov eax, dword ptr [0x109f83f4] */
    DAT_f4 = rd32(COW_IMG(0x109f83f4u));
    
    /* 1031bb07: cmp dword ptr [eax + 8], -1 ; jne ... */
    if (rd32(DAT_f4 + 8u) != 0xffffffffu) {
        goto Lbb76;
    }
    
    /* 1031bb0d-1031bb13: call esi (VirtualFree) */
    cow_stdcall(g, esi_call, 3, rd32(DAT_f4 + 0xcu), 0u, 0x8000u);
    
    /* 1031bb15: mov eax, dword ptr [0x109f83f4] */
    DAT_f4 = rd32(COW_IMG(0x109f83f4u));
    
    /* 1031bb1a-1031bb25: call [0x10329260] (HeapFree) */
    uint32_t import_target = rd32(COW_IMG(0x10329260u));
    cow_stdcall(g, import_target, 3, rd32(COW_IMG(0x109f8404u)), 0u, rd32(DAT_f4 + 0x10u));
    
    /* 1031bb2b: mov eax, dword ptr [0x109f83f8] */
    uint32_t DAT_f8 = rd32(COW_IMG(0x109f83f8u));
    
    /* 1031bb30: mov edx, dword ptr [0x109f83fc] */
    uint32_t DAT_fc = rd32(COW_IMG(0x109f83fcu));
    
    /* 1031bb36: lea eax, [eax + eax*4] */
    DAT_f8 = DAT_f8 + DAT_f8 * 4u;
    
    /* 1031bb39: shl eax, 2 */
    DAT_f8 = DAT_f8 << 2;
    
    /* 1031bb3c: mov ecx, eax */
    uint32_t ecx_arg = DAT_f8;
    
    /* 1031bb3e: mov eax, dword ptr [0x109f83f4] */
    DAT_f4 = rd32(COW_IMG(0x109f83f4u));
    
    /* 1031bb43: sub ecx, eax */
    ecx_arg = ecx_arg - DAT_f4;
    
    /* 1031bb45: lea ecx, [ecx + edx - 0x14] */
    ecx_arg = ecx_arg + DAT_fc - 0x14u;
    
    /* 1031bb49-1031bb4f: call 0x10314a10 (FUN_10314a10) */
    cow_cdecl(g, COW_IMG(0x10314a10u), 3, DAT_f4, DAT_f4 + 0x14u, ecx_arg);
    
    /* 1031bb54: mov eax, dword ptr [ebp + 8] (param1) */
    uint32_t eax_chk = param1;
    
    /* 1031bb5a: dec dword ptr [0x109f83f8] */
    wr32(COW_IMG(0x109f83f8u), rd32(COW_IMG(0x109f83f8u)) - 1u);
    
    /* 1031bb60: cmp eax, dword ptr [0x109f83f4] ; jbe ... */
    DAT_f4 = rd32(COW_IMG(0x109f83f4u));
    if ((int32_t)DAT_f4 < (int32_t)eax_chk) {
        /* 1031bb68: sub dword ptr [ebp + 8], 0x14 */
        param1 = param1 - 0x14u;
    }
    
    /* 1031bb6c: mov eax, dword ptr [0x109f83fc] */
    DAT_fc = rd32(COW_IMG(0x109f83fcu));
    
    /* 1031bb71: mov dword ptr [0x109f83ec], eax */
    wr32(COW_IMG(0x109f83ecu), DAT_fc);

Lbb76:
    /* 1031bb76: mov eax, dword ptr [ebp + 8] (param1) */
    /* param1 is already correct */
    
    /* 1031bb79: mov dword ptr [0x109f83e8], edi */
    wr32(COW_IMG(0x109f83e8u), edi);
    
    /* 1031bb7f: mov dword ptr [0x109f83f4], eax */
    wr32(COW_IMG(0x109f83f4u), param1);

Lbb84:
    /* Pop registers and return */
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031b860(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1031b860(g, rd32(sp0 + 4u), rd32(sp0 + 8u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
